#include "AfflictionSettings.h"

UAfflictionSettings::UAfflictionSettings() {
    this->BurningSound = NULL;
    this->EletrocutedSound = NULL;
    this->HeavyStaggerMinTime = 1.00f;
    this->MediumStaggerMinTime = 0.50f;
    this->HeavyStaggerAffliction = NULL;
    this->MediumStaggerAffliction = NULL;
    this->ShortStaggerAffliction = NULL;
    this->EliteAffliction = NULL;
    this->BurningParticles.AddDefaulted(5);
    this->EletrocutedParticles.AddDefaulted(5);
    this->ExplodingParticles.AddDefaulted(5);
    this->ExplodingSounds.AddDefaulted(5);
}

