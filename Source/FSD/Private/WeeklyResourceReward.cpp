#include "WeeklyResourceReward.h"

class UResourceData;
class AFSDPlayerController;

TMap<UResourceData*, float> UWeeklyResourceReward::GetRewards(AFSDPlayerController* Player) const {
    return TMap<UResourceData*, float>();
}

UWeeklyResourceReward::UWeeklyResourceReward() {
    this->ResourceCount = 2;
}

