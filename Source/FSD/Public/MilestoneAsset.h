#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "OnMilestoneReachedDelegate.h"
#include "MilestoneTier.h"
#include "OnMilestoneClaimedDelegate.h"
#include "MilestoneAsset.generated.h"

class UMilestoneAsset;
class UMissionStat;
class UObject;
class UTexture2D;
class UPlayerCharacterID;

UCLASS(BlueprintType)
class UMilestoneAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FOnMilestoneClaimed OnMilestoneClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FOnMilestoneReached OnMilestoneReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* LargeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FormattedTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FormattedValueOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CountValueAsTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* TrackingStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* TrackingCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMilestoneTier> Tiers;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 LastTierReached;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bPendingMilestoneReached;
    
public:
    UMilestoneAsset();
    UFUNCTION(BlueprintCallable)
    static TArray<UMilestoneAsset*> SortMilestonesByProgress(UObject* WorldContext, UPARAM(Ref) TArray<UMilestoneAsset*>& Milestones);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMissionStatChanged(UObject* WorldContext, UMissionStat* Stat, float Value);
    
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
    
};

