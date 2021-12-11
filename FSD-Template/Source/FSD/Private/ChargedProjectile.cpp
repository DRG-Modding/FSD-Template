#include "ChargedProjectile.h"
#include "Net/UnrealNetwork.h"


void AChargedProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AChargedProjectile, ExplodesWhenDead);
}

AChargedProjectile::AChargedProjectile() {
    this->ExplodesWhenDead = false;
    this->PersistentExplosion = false;
    this->AoEDamageInFlight = false;
    this->DirectDamageReduction = 0.00f;
}

