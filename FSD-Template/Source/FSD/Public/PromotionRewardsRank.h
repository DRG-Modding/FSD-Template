#pragma once
#include "CoreMinimal.h"
#include "ClaimableRewardEntry.h"
#include "ClaimableRewardArray.h"
#include "PromotionRewardsRank.generated.h"

class UPlayerCharacterID;

USTRUCT(BlueprintType)
struct FPromotionRewardsRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FClaimableRewardEntry> RewardsAllClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<UPlayerCharacterID*, FClaimableRewardArray> RewardsCharacterSpecific;
    
    FSD_API FPromotionRewardsRank();
};

