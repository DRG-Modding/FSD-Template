#include "DroneFollowState.h"

UDroneFollowState::UDroneFollowState() {
    this->FollowTarget = NULL;
    this->MaxFollowRadius = 1000.00f;
    this->MinFollowRadius = 300.00f;
    this->UpdateLocationInterval = 8.00f;
    this->UpdateLocationVariance = 3.00f;
}

