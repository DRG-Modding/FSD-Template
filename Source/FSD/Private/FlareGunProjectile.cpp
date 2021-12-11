#include "FlareGunProjectile.h"
#include "Net/UnrealNetwork.h"


void AFlareGunProjectile::OnRep_IsFlareOn() {
}




void AFlareGunProjectile::Inhibit() {
}


void AFlareGunProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlareGunProjectile, Duration);
    DOREPLIFETIME(AFlareGunProjectile, IsFlareOn);
}

AFlareGunProjectile::AFlareGunProjectile() {
    this->Duration = 0.00f;
    this->IsFlareOn = true;
}

