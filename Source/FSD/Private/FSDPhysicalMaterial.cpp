#include "FSDPhysicalMaterial.h"

class UObject;
class UFXSystemComponent;
class UPrimitiveComponent;
class UFSDPhysicalMaterial;

UFXSystemComponent* UFSDPhysicalMaterial::SpawnImpactParticlesFromHit(UObject* WorldContextObject, const FHitResult& HitResult) {
    return NULL;
}

UFXSystemComponent* UFSDPhysicalMaterial::SpawnImpactParticles(UObject* WorldContextObject, FVector Location, FVector Normal) const {
    return NULL;
}

UFSDPhysicalMaterial* UFSDPhysicalMaterial::GetPhysicalMaterialFromPrimitive(UPrimitiveComponent* Component) {
    return NULL;
}

UFSDPhysicalMaterial::UFSDPhysicalMaterial() {
    this->BreakingDecelerationScale = 1.00f;
    this->BreakingFrictionScale = 1.00f;
    this->MaxAccelerationScale = 1.00f;
    this->RepulsePlayer = false;
    this->RepulsePlayerRandomDegreeOffset = 0.00f;
    this->RepulsePlayerSound = NULL;
    this->RepulsePlayerParticle = NULL;
    this->ImpactParticles = NULL;
    this->ImpactNParticles = NULL;
    this->ImpactMaterialOverride = NULL;
    this->ImpactSound = NULL;
    this->MeleeImpactSound = NULL;
    this->UseImpactDecalOverrides = false;
    this->ImpactDecals.AddDefaulted(3);
    this->FirstPersonDamageIndicatorSound = NULL;
    this->IsWeakPoint = false;
    this->IsSubhealthCollider = false;
    this->DamageMultiplier = 1.00f;
    this->FootstepParticle = NULL;
    this->FootstepMaterialOverride = NULL;
    this->FootstepSound = NULL;
    this->ExtraFallVelocity = 0.00f;
    this->FallImpactEffect = NULL;
    this->FallImpactSound = NULL;
    this->alwaysPenetrate = false;
    this->ReactiveTerrain = NULL;
}

