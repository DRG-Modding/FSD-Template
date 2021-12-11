#include "DamageHitCountEffect.h"

UDamageHitCountEffect::UDamageHitCountEffect() {
    this->DamagePerHit = 1.00f;
    this->DamageClass = NULL;
    this->DamageParticle = NULL;
    this->DamageSound = NULL;
    this->DeadBugWalkingTargetMarking = false;
    this->DeadBugWalkingSTE = NULL;
}

