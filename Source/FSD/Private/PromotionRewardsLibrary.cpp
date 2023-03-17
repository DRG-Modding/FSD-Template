#include "PromotionRewardsLibrary.h"

bool UPromotionRewardsLibrary::HasPendingPromotionRewards(UObject* WorldContext) {
    return false;
}

bool UPromotionRewardsLibrary::ClaimPromotionRewards(UObject* WorldContext, APlayerController* PlayerController, TArray<FClaimableRewardEntry>& OutRewards, bool& OutFirstPromotion) {
    return false;
}

UPromotionRewardsLibrary::UPromotionRewardsLibrary() {
}

