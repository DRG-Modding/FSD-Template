#include "CrossbowStuckProjectileEffectElectric.h"

class AActor;

void UCrossbowStuckProjectileEffectElectric::OnElectrocutionActorDestroyed(AActor* Actor) {
}

UCrossbowStuckProjectileEffectElectric::UCrossbowStuckProjectileEffectElectric() {
    this->PlasmaBeamClass = NULL;
    this->ElectrocutionActorClass = NULL;
    this->PlasmaLineMaxRange = 1000.00f;
}

