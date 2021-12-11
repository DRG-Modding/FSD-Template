#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "MilestoneTier.h"
#include "MilestoneAsset.generated.h"

class UFSDGameInstance;
class UObject;
class UMissionStat;
class UTexture2D;
class UMilestoneAsset;
class UPlayerCharacterID;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMilestoneAssetOnMilestoneClaimed, UMilestoneAsset*, Milestone, int32, ClaimedTier);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMilestoneAssetOnMilestoneReached, UMilestoneAsset*, Milestone, int32, ReachedTier);

UCLASS(BlueprintType)
class UMilestoneAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FMilestoneAssetOnMilestoneClaimed OnMilestoneClaimed;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FMilestoneAssetOnMilestoneReached OnMilestoneReached;
    
protected:
    UPROPERTY(VisibleAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* LargeImage;
    
    UPROPERTY(EditAnywhere)
    FText FormattedTitle;
    
    UPROPERTY(EditAnywhere)
    int32 FormattedValueOffset;
    
    UPROPERTY(EditAnywhere)
    bool CountValueAsTotal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* TrackingStat;
    
    UPROPERTY(EditAnywhere)
    UPlayerCharacterID* TrackingCharacterID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMilestoneTier> Tiers;
    
    UPROPERTY(Transient)
    UFSDGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 LastTierReached;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bPendingMilestoneReached;
    
public:
    UFUNCTION(BlueprintCallable)
    static TArray<UMilestoneAsset*> SortMilestonesByProgress(UObject* WorldContext, UPARAM(Ref) TArray<UMilestoneAsset*>& Milestones);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMissionStatChanged(UMissionStat* Stat, float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClaimable(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleForTier(int32 Tier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextPerkPointsReward(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentProgress(UObject* WorldContext, int32& Tier, float& Progress, float& CurrentCount, float& TargetCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClaimedTier(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClaimedProgress(UObject* WorldContext, int32& Tier, float& Progress, float& CurrentCount, float& TargetCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetCategoryIcon() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearPendingMilestoneReached();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 ClaimNextTier(UObject* WorldContext);
    
    UMilestoneAsset();
};

