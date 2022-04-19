#include "AimingTowerModule.h"
#include "Net/UnrealNetwork.h"

void AAimingTowerModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAimingTowerModule, Target);
    DOREPLIFETIME(AAimingTowerModule, AimRotation);
}

AAimingTowerModule::AAimingTowerModule() {
    this->Target = NULL;
    this->BurstTime = 0.00f;
    this->AttackTime = 0.00f;
    this->BurstSize = 0;
}

