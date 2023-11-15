#include "AimingTowerModule.h"
#include "Net/UnrealNetwork.h"

AAimingTowerModule::AAimingTowerModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmorPlates.AddDefaulted(3);
    this->Target = NULL;
    this->BurstTime = 0.00f;
    this->AttackTime = 0.00f;
    this->BurstSize = 0;
}

void AAimingTowerModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAimingTowerModule, Target);
    DOREPLIFETIME(AAimingTowerModule, AimRotation);
}


