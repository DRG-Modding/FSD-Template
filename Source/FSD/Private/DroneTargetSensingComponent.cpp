#include "DroneTargetSensingComponent.h"

UDroneTargetSensingComponent::UDroneTargetSensingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PulseFrom = NULL;
    this->SensingRange = 0.00f;
    this->SensingIntervals = 0.00f;
    this->NeedsLineOfSight = false;
}


