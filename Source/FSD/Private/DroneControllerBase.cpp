#include "DroneControllerBase.h"

void ADroneControllerBase::OnShout(APlayerCharacter* ShoutingPlayer) {
}

void ADroneControllerBase::OnSecondaryLaserPointer(const FLaserPointerTarget& HitInfo) {
}

void ADroneControllerBase::OnSalute(APlayerCharacter* aCharacater) {
}

void ADroneControllerBase::OnPrimaryLaserpointer(const FLaserPointerTarget& HitInfo) {
}

ADroneControllerBase::ADroneControllerBase() {
    this->ControlledDrone = NULL;
}

