#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EInputKeys.h"
#include "EUseRestriction.h"
#include "UsableComponentBase.generated.h"

class UTexture2D;
class APlayerCharacter;
class UUseAnimationSetting;
class USceneComponent;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUsableComponentBaseOnClientBeginUse, APlayerCharacter*, User, EInputKeys, Key);

UCLASS(Abstract, Blueprintable)
class UUsableComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUsableComponentBaseOnClientBeginUse OnClientBeginUse;
    
    UPROPERTY(EditAnywhere)
    int32 CallbackKeys;
    
protected:
    UPROPERTY(EditAnywhere)
    float UseCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool MustBeGroundedToUse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanUseStrict;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StrictOnlyAfterPickup;
    
    UPROPERTY(EditAnywhere)
    UUseAnimationSetting* AnimationSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseableByOwnerOnly;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USceneComponent* RestrictToCollider;
    
    UPROPERTY(EditAnywhere)
    EUseRestriction UseRestrictionAllowance;
    
    UPROPERTY(EditAnywhere)
    bool IsRayTraceTriggered;
    
    UPROPERTY(EditAnywhere)
    bool ResetUsingOnCompletion;
    
    UPROPERTY(EditAnywhere)
    bool EquipOnEndUse;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRayTraceTriggered(bool rayTraceTriggered);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetUseText(APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUseProgressInPercent(APlayerCharacter* User) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetUsableIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowUsingUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRayTraceTriggerd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideProgressBar(APlayerCharacter* User) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideActionText(APlayerCharacter* User) const;
    
    UFUNCTION(BlueprintCallable)
    void EndUse(APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable)
    void BeginUse(APlayerCharacter* User, EInputKeys Key);
    
    UUsableComponentBase();
};

