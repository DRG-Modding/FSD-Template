#include "RadialFireModule.h"
#include "Net/UnrealNetwork.h"

ARadialFireModule::ARadialFireModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileClass = NULL;
    this->RotationSpeedTurret = 0.00f;
    this->DelayBetweenShots = 0.00f;
    this->IsAttacking = false;
}


void ARadialFireModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARadialFireModule, IsAttacking);
}


