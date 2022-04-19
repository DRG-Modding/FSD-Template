#include "DroneFlame.h"
#include "Particles/ParticleSystemComponent.h"
#include "DamageComponent.h"

ADroneFlame::ADroneFlame() {
    this->FlameParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticles"));
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->OnFireStatusEffect = NULL;
    this->DamageTickRate = 0.00f;
    this->Duration = 0.00f;
    this->FlameDiameter = 0.00f;
    this->range = 0.00f;
}

