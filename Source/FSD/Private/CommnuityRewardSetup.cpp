#include "CommnuityRewardSetup.h"

class UObject;
class UResourceData;

TMap<UResourceData*, int32> UCommnuityRewardSetup::GetResourcesTierOnlyReward(int32 Tier) {
    return TMap<UResourceData*, int32>();
}

TMap<UResourceData*, int32> UCommnuityRewardSetup::GetResourcesReward(int32 Tier) {
    return TMap<UResourceData*, int32>();
}

void UCommnuityRewardSetup::AwardTierRewards(UObject* WorldContext, int32 Tier) {
}

UCommnuityRewardSetup::UCommnuityRewardSetup() {
}

