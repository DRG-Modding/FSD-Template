#pragma once
#include "CoreMinimal.h"
#include "EInputKeys.h"
#include "Components/ActorComponent.h"
#include "DroneFinishedUsingDelegate.h"
#include "DelegateEventDelegate.h"
#include "DroneUseProgressDelegate.h"
#include "DroneUseComponent.generated.h"

class APlayerCharacter;
class UDialogDataAsset;
class USingleUsableComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FSD_API UDroneUseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDroneFinishedUsing OnUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnBeginUse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnStopUse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDroneUseProgress OnProgress;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* BoscoLaserpointerShout;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USingleUsableComponent> SyncToUsable;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float useDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetOnFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanUse;
    
public:
    UDroneUseComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
};

