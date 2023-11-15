#include "Season.h"

USeason::USeason() {
    this->SeasonNumber = 0;
    this->TreeOfVanity = NULL;
    this->SeasonDLC = NULL;
    this->NumberOfScripChallenges = 0;
    this->SeasonWaveInMissionChance = 0.00f;
    this->SeasonWarning = NULL;
}

void USeason::AddUnassignedReward(int32 Index, UReward* Reward) {
}

void USeason::AddLevel(int32 Index, UReward* Reward, UReward* specialReward) {
}


