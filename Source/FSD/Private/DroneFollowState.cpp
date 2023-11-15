#include "DroneFollowState.h"

UDroneFollowState::UDroneFollowState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FollowTarget = NULL;
    this->MaxFollowRadius = 1000.00f;
    this->MinFollowRadius = 300.00f;
    this->UpdateLocationInterval = 8.00f;
    this->UpdateLocationVariance = 3.00f;
}


