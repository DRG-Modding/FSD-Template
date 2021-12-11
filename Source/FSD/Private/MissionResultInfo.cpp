#include "MissionResultInfo.h"

float UMissionResultInfo::GetWarningBonusSum() {
    return 0.0f;
}

UMissionResultInfo::UMissionResultInfo() {
    this->HasInfo = false;
    this->MissionTime = 0.00f;
    this->MissionTotalHazBonus = 0.00f;
    this->MissionHazBonus = 0.00f;
    this->ComplexityBonus = 0.00f;
    this->ComplexityDots = 0;
    this->LenghtBonus = 0.00f;
    this->LenghtDots = 0;
    this->TotalCreditsSum = 0.00f;
    this->TotalXPSum = 0.00f;
    this->WasSuccess = false;
}

