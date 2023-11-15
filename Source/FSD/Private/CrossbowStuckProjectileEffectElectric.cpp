#include "CrossbowStuckProjectileEffectElectric.h"

UCrossbowStuckProjectileEffectElectric::UCrossbowStuckProjectileEffectElectric(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlasmaBeamClass = NULL;
    this->ElectrocutionActorClass = NULL;
    this->PlasmaLineMaxRange = 1000.00f;
}

void UCrossbowStuckProjectileEffectElectric::OnElectrocutionActorDestroyed(AActor* Actor) {
}


