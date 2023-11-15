#include "HalloweenSkull.h"

AHalloweenSkull::AHalloweenSkull(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AlertedMovementScale = 1.00f;
    this->AlertedMovementTimeScale = 1.00f;
    this->JawMovementSpeed = 1.00f;
}


void AHalloweenSkull::OnAlert() {
}


