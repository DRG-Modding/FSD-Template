#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CountDownFloat.h"
#include "EIntoxicationState.h"
#include "LerpingPercent.h"
#include "EDrinkableAlcoholStrength.h"
#include "CharacterIntoxicationComponent.generated.h"

class APlayerCharacter;
class UCurveFloat;
class UDrinkableDataAsset;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterIntoxicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPassOutDrunkSignature, APlayerCharacter*, Player);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIntoxicationProgressSignature, APlayerCharacter*, Player, float, Progress);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntoxicationProgressSignature OnIntoxicationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPassOutDrunkSignature OnPassOutDrunk;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EIntoxicationState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FLerpingPercent IntoxicationPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntoxicationLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeDrunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCountDownFloat SoberingUpCoolDown;
    
    UPROPERTY(EditAnywhere)
    uint8 SoberingPercent;
    
public:
    UCharacterIntoxicationComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateChange(EIntoxicationState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePassOutDrunk();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDrunkTick(float DeltaTime, float DrunkTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDrunkEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDrunkBegin();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassOutDrunk() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnSpaceRig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrunk() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAuthority() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSoberingUpCoolDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntoxicationProgressMapped(UCurveFloat* Curve) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntoxicationProgress() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAlcoholPct(EDrinkableAlcoholStrength Strength) const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Consume(UDrinkableDataAsset* Drinkable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearIntoxication();
    
};

