#include "RandomFiringGuntowerModule.h"
#include "Net/UnrealNetwork.h"

void ARandomFiringGuntowerModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARandomFiringGuntowerModule, OtherCurrentRotation);
    DOREPLIFETIME(ARandomFiringGuntowerModule, IsAttacking);
}

ARandomFiringGuntowerModule::ARandomFiringGuntowerModule() {
    this->LaserImpact = NULL;
    this->BoneSpaceTurretMaxYaw = 0.00f;
    this->BoneSpaceTurretMaxPitch = 0.00f;
    this->TimeBetweenAttacks = 0.00f;
    this->TimeUntilNextAttack = 3.00f;
    this->ModuleRotationSpeed = 0.00f;
    this->TurretAimSpeed = 0.00f;
    this->LaserLeghtRatio = 1.00f;
    this->TimeBetweenHits = 0.25f;
    this->ChanceToInvert = 0.50f;
    this->PlatformDissolveRadius = 100.00f;
    this->PlatformDissolveSqueeze = 3.00f;
    this->IsAttacking = false;
}

