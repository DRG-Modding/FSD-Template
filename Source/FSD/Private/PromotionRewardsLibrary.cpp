#include "PromotionRewardsLibrary.h"

class UObject;
class APlayerController;

bool UPromotionRewardsLibrary::ClaimPromotionRewards(UObject* WorldContext, APlayerController* PlayerController, TArray<FClaimableRewardEntry>& OutRewards, bool& OutFirstPromotion) {
    return false;
}

UPromotionRewardsLibrary::UPromotionRewardsLibrary() {
}

