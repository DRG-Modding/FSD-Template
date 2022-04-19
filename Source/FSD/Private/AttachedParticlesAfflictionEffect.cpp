#include "AttachedParticlesAfflictionEffect.h"

UAttachedParticlesAfflictionEffect::UAttachedParticlesAfflictionEffect() {
    this->ParticleEffect = NULL;
    this->ParticleEffects.AddDefaulted(5);
    this->Socket = EAfflictionSocket::CenterMass;
    this->ScaleToActor = true;
    this->UseVisibilityHack = false;
    this->UseBoneFilter = false;
}

