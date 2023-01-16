#include "SeasonMissionResult.h"

FSeasonMissionResult::FSeasonMissionResult() {
    this->XPFromMission = 0;
    this->XPFromChallenges = 0;
    this->XPFromRewards = 0;
    this->XPMultiplier = 0.00f;
    this->TokenGain = 0;
    this->LevelIncreased = false;
    this->EndScreenImage = NULL;
    this->EndScreenResourceIcon = NULL;
}

