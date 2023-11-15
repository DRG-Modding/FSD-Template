#include "WeeklyResourceReward.h"

UWeeklyResourceReward::UWeeklyResourceReward() {
    this->ResourceCount = 2;
}

TMap<UResourceData*, float> UWeeklyResourceReward::GetRewards(AFSDPlayerController* Player) const {
    return TMap<UResourceData*, float>();
}


