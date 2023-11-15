#include "ChargedProjectile.h"
#include "Net/UnrealNetwork.h"

AChargedProjectile::AChargedProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplodesWhenDead = false;
    this->PersistentExplosion = false;
    this->AoEDamageInFlight = false;
    this->DirectDamageReduction = 0.00f;
}


void AChargedProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AChargedProjectile, ExplodesWhenDead);
}


