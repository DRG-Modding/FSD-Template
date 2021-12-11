#include "AnimNotifyState_TimedParticleEffectWithImpactDecals.h"

class UPhysicalMaterial;

void UAnimNotifyState_TimedParticleEffectWithImpactDecals::OnParticleCollision(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat) const {
}

UAnimNotifyState_TimedParticleEffectWithImpactDecals::UAnimNotifyState_TimedParticleEffectWithImpactDecals() {
    this->DecalMaterial = NULL;
    this->DecalSize = 50.00f;
    this->FadeStartDelay = 1.00f;
    this->FadeDuration = 1.00f;
}

