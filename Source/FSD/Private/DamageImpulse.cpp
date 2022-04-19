#include "DamageImpulse.h"

UDamageImpulse::UDamageImpulse() {
    this->ImpactForce = 5.00f;
    this->UpwardForceScale = 1.00f;
    this->ImpulseSource = EImpulseDirectionSource::SourceForward;
    this->ApplyImpulseToWholeBody = false;
}

