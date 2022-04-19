#include "ExplosiveBarrelEvent.h"
#include "DamageComponent.h"

AExplosiveBarrelEvent::AExplosiveBarrelEvent() {
    this->EndDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("EndDamage"));
}

