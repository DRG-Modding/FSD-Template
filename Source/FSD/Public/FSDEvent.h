#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ClaimableRewardView.h"
#include "UObject/NoExportTypes.h"
#include "FSDEvent.generated.h"

class UObject;
class UWorld;
class UFSDEvent;
class ADebrisDataActor;
class UCampaign;
class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDEventOnActiveChanged, const UFSDEvent*, InFsdEvent, bool, InIsActive);

UCLASS(BlueprintType)
class FSD_API UFSDEvent : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDEventOnActiveChanged OnActiveChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EventName;
    
    UPROPERTY(VisibleAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY()
    bool bHasClaimableRewards;
    
    UPROPERTY(EditAnywhere)
    bool bFreeBeerEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<ADebrisDataActor>> EventDebris;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> SpacerigSublevels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FClaimableRewardView ClaimableRewards;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UCampaign>> Campaigns;
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkClaimableRewardsSeen(UObject* WorldContext);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFsdEventActive(UObject* WorldContext, const UFSDEvent* FSDEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnseenClaimableRewards(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    bool GiveRewards(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsActive(UObject* WorldContext) const;
    
    UFSDEvent();
};

