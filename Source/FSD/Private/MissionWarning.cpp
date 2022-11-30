#include "MissionWarning.h"

UMissionWarning::UMissionWarning() {
    this->OptionalExtraObjective = NULL;
    this->DoubleWarning = true;
    this->Icon = NULL;
    this->CampaignIcon = NULL;
    this->HazardBonus = 0.00f;
    this->MissionCompletedStat = NULL;
    this->CampaignWeight = 1.00f;
}

