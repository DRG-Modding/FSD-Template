#include "WeaponHitEffectComponent.h"

void UWeaponHitEffectComponent::Server_SpawnEffect_Implementation(const FVector_NetQuantize& Location, const FRotator& Rotation) {
}

void UWeaponHitEffectComponent::OnHit(const FHitResult& HitResult, bool isAlwaysPenetrated) {
}

UWeaponHitEffectComponent::UWeaponHitEffectComponent() {
    this->EffectChance = 1.00f;
    this->ActorToSpawn = NULL;
}

