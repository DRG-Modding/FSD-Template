#pragma once
#include "CoreMinimal.h"
#include "EDrinkableAlcoholStrength.h"
#include "EIntoxicationState.h"
#include "Components/ActorComponent.h"
#include "LerpingPercent.h"
#include "CountDownFloat.h"
#include "CharacterIntoxicationComponent.generated.h"

class UDrinkableDataAsset;
class APlayerCharacter;
class UCurveFloat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterIntoxicationComponentOnPassOutDrunk, APlayerCharacter*, Player);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterIntoxicationComponentOnIntoxicationChanged, APlayerCharacter*, Player, float, Progress);

UCLASS(Blueprintable, MinimalAPI)
class UCharacterIntoxicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCharacterIntoxicationComponentOnIntoxicationChanged OnIntoxicationChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterIntoxicationComponentOnPassOutDrunk OnPassOutDrunk;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EIntoxicationState CurrentState;
    
    UPROPERTY(Replicated, Transient)
    FLerpingPercent IntoxicationPercent;
    
    UPROPERTY(EditAnywhere)
    float IntoxicationLerpSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TimeDrunk;
    
    UPROPERTY(EditAnywhere)
    FCountDownFloat SoberingUpCoolDown;
    
    UPROPERTY(EditAnywhere)
    uint8 SoberingPercent;
    
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCharacterIntoxicationComponent();
};

