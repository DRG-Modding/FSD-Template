#include "WeeklyResourceReward.h"

class AFSDPlayerController;
class UResourceData;

TMap<UResourceData*, float> UWeeklyResourceReward::GetRewards(AFSDPlayerController* Player) const {
    return TMap<UResourceData*, float>();
}

UWeeklyResourceReward::UWeeklyResourceReward() {
    this->ResourceCount = 2;
}

