#include "MiningPodAnimInstance.h"

UMiningPodAnimInstance::UMiningPodAnimInstance() {
    this->rampState = EMiningPodRampState::Closed;
    this->PodState = EMiningPodState::Dropping;
}

