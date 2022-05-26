#include "AfflictionSettings.h"

UAfflictionSettings::UAfflictionSettings() {
    this->FreezeSound = NULL;
    this->IceBreakSound = NULL;
    this->BurningSound = NULL;
    this->EletrocutedSound = NULL;
    this->HeavyStaggerMinTime = 1.00f;
    this->MediumStaggerMinTime = 0.50f;
    this->HeavyStaggerAffliction = NULL;
    this->MediumStaggerAffliction = NULL;
    this->ShortStaggerAffliction = NULL;
    this->EliteAffliction = NULL;
    this->FreezeParticles.AddDefaulted(5);
    this->IceBreakParticles.AddDefaulted(5);
    this->BurningParticles.AddDefaulted(5);
    this->EletrocutedParticles.AddDefaulted(5);
    this->ExplodingParticles.AddDefaulted(5);
    this->ExplodingSounds.AddDefaulted(5);
}

