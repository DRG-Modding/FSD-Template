#include "ExplosiveBarrelEvent.h"
#include "DamageComponent.h"

AExplosiveBarrelEvent::AExplosiveBarrelEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EndDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("EndDamage"));
}


