#include "VictoryPoseSettings.h"

class UVictoryPose;

TArray<UVictoryPose*> UVictoryPoseSettings::GetVictoryPoses() const {
    return TArray<UVictoryPose*>();
}

UVictoryPoseSettings::UVictoryPoseSettings() {
    this->GenericVictoryPoseIcon = NULL;
    this->RandomVictoryPose = NULL;
}

