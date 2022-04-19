#include "DamageClass.h"

UDamageClass::UDamageClass() {
    this->ResistanceStat = NULL;
    this->RagdollScale = 1.00f;
    this->BypassesShield = false;
    this->AffectedByFriendlyFire = true;
    this->IndicatorImage = NULL;
    this->DamageShout = NULL;
    this->DefaultDamageImpulse = NULL;
}

