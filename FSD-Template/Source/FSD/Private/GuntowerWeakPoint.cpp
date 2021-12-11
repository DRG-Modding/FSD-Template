#include "GuntowerWeakPoint.h"

class UHealthComponentBase;


void AGuntowerWeakPoint::OnDeath(UHealthComponentBase* HealthComponent) {
}

void AGuntowerWeakPoint::DamageParent(float ammount) {
}

AGuntowerWeakPoint::AGuntowerWeakPoint() {
    this->DamageToParent = NULL;
    this->deathParticles = NULL;
    this->deathSound = NULL;
}

