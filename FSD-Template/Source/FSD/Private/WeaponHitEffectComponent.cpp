#include "WeaponHitEffectComponent.h"

void UWeaponHitEffectComponent::Server_SpawnEffect_Implementation(const FVector_NetQuantize& Location, const FRotator& Rotation) {
}
bool UWeaponHitEffectComponent::Server_SpawnEffect_Validate(const FVector_NetQuantize& Location, const FRotator& Rotation) {
    return true;
}

void UWeaponHitEffectComponent::OnHit(const FHitResult& HitResult, bool isAlwaysPenetrated) {
}

UWeaponHitEffectComponent::UWeaponHitEffectComponent() {
    this->EffectChance = 1.00f;
    this->ActorToSpawn = NULL;
}

