#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EInputKeys.h"
#include "DroneUseComponent.generated.h"

class APlayerCharacter;
class UDialogDataAsset;
class USingleUsableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroneUseComponentOnUsed, int32, TimesUsed);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDroneUseComponentOnBeginUse);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDroneUseComponentOnStopUse);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroneUseComponentOnProgress, float, Progress);

UCLASS(BlueprintType)
class FSD_API UDroneUseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDroneUseComponentOnUsed OnUsed;
    
    UPROPERTY(BlueprintAssignable)
    FDroneUseComponentOnBeginUse OnBeginUse;
    
    UPROPERTY(BlueprintAssignable)
    FDroneUseComponentOnStopUse OnStopUse;
    
    UPROPERTY(BlueprintAssignable)
    FDroneUseComponentOnProgress OnProgress;
    
protected:
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* BoscoLaserpointerShout;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USingleUsableComponent> SyncToUsable;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float Progress;
    
    UPROPERTY(EditAnywhere)
    float useDuration;
    
    UPROPERTY(EditAnywhere)
    bool ResetOnFail;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanUse;
    
    UFUNCTION(BlueprintCallable)
    void SyncedUsableUserCountChangedResponse(int32 userCount);
    
    UFUNCTION(BlueprintCallable)
    void SyncedUsableUsedResponse(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void SyncedUsableBeginUseResponse(APlayerCharacter* User, EInputKeys Key);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetUseDuration(float NewUseDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetCanUse(bool NewCanUse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void EndUse();
    
    UFUNCTION(BlueprintCallable)
    void BeginUse();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UDroneUseComponent();
};

