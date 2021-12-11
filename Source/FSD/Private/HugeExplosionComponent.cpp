#include "HugeExplosionComponent.h"

void UHugeExplosionComponent::TriggerExplosion(FVector Location) {
}

UHugeExplosionComponent::UHugeExplosionComponent() {
    this->ExplosionEffect = NULL;
    this->ExplosionSpeed = 100.00f;
    this->ExplosionSize = 2500.00f;
}

