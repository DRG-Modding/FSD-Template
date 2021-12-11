#include "CommnuityRewardSetup.h"

class UResourceData;
class UObject;

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

