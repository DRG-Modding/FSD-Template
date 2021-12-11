#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ClaimableRewardEntry.h"
#include "PromotionRewardsRank.h"
#include "PromotionRewardsSettings.generated.h"

UCLASS()
class UPromotionRewardsSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FClaimableRewardEntry> FirstPromotionRewards;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FPromotionRewardsRank> PromotionRanks;
    
    UPromotionRewardsSettings();
};

