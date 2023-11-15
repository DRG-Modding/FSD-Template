#include "VictoryPoseSettings.h"

UVictoryPoseSettings::UVictoryPoseSettings() {
    this->GenericVictoryPoseIcon = NULL;
    this->RandomVictoryPose = NULL;
}

TArray<UVictoryPose*> UVictoryPoseSettings::GetVictoryPoses() const {
    return TArray<UVictoryPose*>();
}


