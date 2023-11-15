#include "FlareGunProjectile.h"
#include "Net/UnrealNetwork.h"

AFlareGunProjectile::AFlareGunProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Duration = 0.00f;
    this->IsFlareOn = true;
}

void AFlareGunProjectile::UpdateLightDuration(float lightDuration) {
}


void AFlareGunProjectile::OnRep_IsFlareOn() {
}




void AFlareGunProjectile::Inhibit() {
}


void AFlareGunProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlareGunProjectile, Duration);
    DOREPLIFETIME(AFlareGunProjectile, IsFlareOn);
}


