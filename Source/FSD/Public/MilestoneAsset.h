#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "MilestoneTier.h"
#include "OnMilestoneClaimedDelegate.h"
#include "OnMilestoneReachedDelegate.h"
#include "MilestoneAsset.generated.h"

class UMilestoneAsset;
class UMissionStat;
class UObject;
class UPlayerCharacterID;
class UTexture2D;

UCLASS(Blueprintable)
class UMilestoneAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnMilestoneClaimed OnMilestoneClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnMilestoneReached OnMilestoneReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastTierReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPendingMilestoneReached;
    
public:
    UMilestoneAsset();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<UMilestoneAsset*> SortMilestonesByProgress(UObject* WorldContext, UPARAM(Ref) TArray<UMilestoneAsset*>& Milestones);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void OnMissionStatChanged(UObject* WorldContext, UMissionStat* Stat, float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsCompleted(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsClaimable(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleForTier(int32 Tier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    FText GetTitle(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    int32 GetNextPerkPointsReward(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    void GetCurrentProgress(UObject* WorldContext, int32& Tier, float& Progress, float& CurrentCount, float& TargetCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    int32 GetClaimedTier(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool GetClaimedProgress(UObject* WorldContext, int32& Tier, float& Progress, float& CurrentCount, float& TargetCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetCategoryIcon() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearPendingMilestoneReached();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    int32 ClaimNextTier(UObject* WorldContext);
    
};

