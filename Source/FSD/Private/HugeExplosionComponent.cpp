#include "HugeExplosionComponent.h"

UHugeExplosionComponent::UHugeExplosionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionEffect = NULL;
    this->ExplosionSpeed = 100.00f;
    this->ExplosionSize = 2500.00f;
}

void UHugeExplosionComponent::TriggerExplosion(FVector Location) {
}


