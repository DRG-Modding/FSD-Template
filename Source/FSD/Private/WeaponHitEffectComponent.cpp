#include "WeaponHitEffectComponent.h"

UWeaponHitEffectComponent::UWeaponHitEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectChance = 1.00f;
    this->ActorToSpawn = NULL;
}

void UWeaponHitEffectComponent::Server_SpawnEffect_Implementation(const FVector_NetQuantize& Location, const FRotator& Rotation) {
}

void UWeaponHitEffectComponent::OnHit(const FHitResult& HitResult, bool isAlwaysPenetrated) {
}


