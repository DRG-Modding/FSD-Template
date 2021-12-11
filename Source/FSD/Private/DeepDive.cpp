#include "DeepDive.h"

bool UDeepDive::IsCompleted() const {
    return false;
}

bool UDeepDive::HasCompletedStage(int32 stageIndex) const {
    return false;
}

FDeepDiveRewardItem UDeepDive::GetGivenRewardAtStage(int32 stageIndex) {
    return FDeepDiveRewardItem{};
}

UDeepDive::UDeepDive() {
    this->Biome = NULL;
    this->MissionsCompleted = 0;
    this->CurrentMissionIndex = 0;
    this->Template = NULL;
    this->BestTime = 0;
}

