#include "DroneTargetSensingComponent.h"

UDroneTargetSensingComponent::UDroneTargetSensingComponent() {
    this->PulseFrom = NULL;
    this->SensingRange = 0.00f;
    this->SensingIntervals = 0.00f;
    this->NeedsLineOfSight = false;
}

