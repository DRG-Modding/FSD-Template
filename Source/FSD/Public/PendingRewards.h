#pragma once
#include "CoreMinimal.h"
#include "PendingRewardsStats.h"
#include "CreditsReward.h"
#include "XPReward.h"
#include "PendingRewards.generated.h"

USTRUCT(BlueprintType)
struct FPendingRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FPendingRewardsStats StartStats;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FPendingRewardsStats EndStats;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCreditsReward> CreditsRewardEntries;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 CreditsReward;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FXPReward> XPRewardEntries;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 XPReward;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bHasData;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRecording;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bWasRewarded;
    
    FSD_API FPendingRewards();
};

