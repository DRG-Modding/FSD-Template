#include "PromotionRewardsLibrary.h"

class APlayerController;
class UObject;

bool UPromotionRewardsLibrary::ClaimPromotionRewards(UObject* WorldContext, APlayerController* PlayerController, TArray<FClaimableRewardEntry>& OutRewards, bool& OutFirstPromotion) {
    return false;
}

UPromotionRewardsLibrary::UPromotionRewardsLibrary() {
}

