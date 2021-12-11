#pragma once
#include "CoreMinimal.h"
#include "CreditsReward.h"
#include "PendingRewardsStats.h"
#include "XPReward.h"
#include "PendingRewards.generated.h"

USTRUCT(BlueprintType)
struct FPendingRewards {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FPendingRewardsStats StartStats;
    
    UPROPERTY(Transient)
    FPendingRewardsStats EndStats;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FCreditsReward> CreditsRewardEntries;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CreditsReward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FXPReward> XPRewardEntries;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 XPReward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bHasData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsRecording;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasRewarded;
    
    FSD_API FPendingRewards();
};

