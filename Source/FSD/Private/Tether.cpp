#include "Tether.h"
#include "Net/UnrealNetwork.h"

void ATether::SetIsOnGround(bool NewIsOnGround) {
}




void ATether::Explode_Implementation() {
}

void ATether::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATether, IsOnGround);
}

ATether::ATether() {
    this->ExplosionParticle = NULL;
    this->ExplosionSound = NULL;
    this->IsOnGround = false;
    this->KnockBackForce = 300.00f;
}

