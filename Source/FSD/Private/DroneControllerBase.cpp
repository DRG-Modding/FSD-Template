#include "DroneControllerBase.h"

class APlayerCharacter;
class AActor;

void ADroneControllerBase::OnShout(APlayerCharacter* ShoutingPlayer) {
}

void ADroneControllerBase::OnSecondaryLaserPointer(AActor* aTarget, const FVector& aLocation) {
}

void ADroneControllerBase::OnSalute(APlayerCharacter* aCharacater) {
}

void ADroneControllerBase::OnPrimaryLaserpointer(const FLaserPointerTarget& HitInfo) {
}

ADroneControllerBase::ADroneControllerBase() {
    this->ControlledDrone = NULL;
}

