#include "BEEMissionTemplate.h"

bool UBEEMissionTemplate::IsDurationAllowed(UMissionTemplate* mission, UMissionDuration* Duration) const {
    return false;
}

bool UBEEMissionTemplate::IsComplexityAllowed(UMissionTemplate* mission, UMissionComplexity* Complexity) const {
    return false;
}

UBEEMissionTemplate::UBEEMissionTemplate() {
    this->MissionCount = 4;
    this->Difficulties.AddDefaulted(4);
    this->CreditsPerPrimaryObjective = 1000;
    this->CreditsPerSecondaryObjective = 1000;
    this->XPPerPrimaryObjective = 1000;
    this->XPPerSecondaryObjective = 1000;
    this->HazardBonus = 1.00f;
}

