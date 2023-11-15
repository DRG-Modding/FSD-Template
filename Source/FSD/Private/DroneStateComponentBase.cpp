#include "DroneStateComponentBase.h"

UDroneStateComponentBase::UDroneStateComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SubsequentState = EDroneState::EFollow;
}


