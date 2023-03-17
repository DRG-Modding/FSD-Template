#include "DeepDiveTemplate.h"

bool UDeepDiveTemplate::IsDurationAllowed(UMissionTemplate* mission, UMissionDuration* Duration) const {
    return false;
}

bool UDeepDiveTemplate::IsComplexityAllowed(UMissionTemplate* mission, UMissionComplexity* Complexity) const {
    return false;
}

ESchematicType UDeepDiveTemplate::GetStageRewardType(int32 stageIndex) const {
    return ESchematicType::Overclock;
}

UDeepDiveTemplate::UDeepDiveTemplate() {
    this->Difficulties.AddDefaulted(3);
    this->Rewards.AddDefaulted(3);
    this->CreditsPerPrimaryObjective = 1000;
    this->CreditsPerSecondaryObjective = 1000;
    this->XPPerPrimaryObjective = 1000;
    this->XPPerSecondaryObjective = 1000;
    this->HazardBonus = 1.00f;
}

