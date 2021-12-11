#pragma once
#include "CoreMinimal.h"
#include "RewardsClaimed.h"
#include "ChallengeSaveInfo.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SeasonSaveEntry.generated.h"

USTRUCT(BlueprintType)
struct FSeasonSaveEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    int32 XP;
    
    UPROPERTY()
    int32 Tokens;
    
    UPROPERTY()
    TArray<FRewardsClaimed> RewardsClaimed;
    
    UPROPERTY()
    bool HasClaimedAllRewards;
    
    UPROPERTY()
    int32 RewardsClaimedAfterMaxLevel;
    
    UPROPERTY()
    TMap<int32, bool> NodesBought;
    
    UPROPERTY()
    TArray<FChallengeSaveInfo> ActiveChallenges;
    
    UPROPERTY()
    FDateTime LastNewChallengeGiven;
    
    UPROPERTY()
    FDateTime LastChallengeReroll;
    
    UPROPERTY()
    TMap<FGuid, int32> CompletedSpecialChallenges;
    
    UPROPERTY()
    int32 ClaimedScripChallenges;
    
    UPROPERTY()
    float TimePlayedAtSeasonStart;
    
    UPROPERTY()
    float ChallengesCompletedAtSeasonStart;
    
public:
    FSD_API FSeasonSaveEntry();
};

