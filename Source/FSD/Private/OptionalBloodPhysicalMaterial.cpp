#include "OptionalBloodPhysicalMaterial.h"

UOptionalBloodPhysicalMaterial::UOptionalBloodPhysicalMaterial() {
    this->ImpactDecals.AddDefaulted(3);
    this->BloodlessImpactParticles = NULL;
}


