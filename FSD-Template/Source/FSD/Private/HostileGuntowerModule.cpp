#include "HostileGuntowerModule.h"
#include "Net/UnrealNetwork.h"

class UHealthComponentBase;

void AHostileGuntowerModule::OnWeakpointDied(UHealthComponentBase* Health) {
}

void AHostileGuntowerModule::OnRep_ModuleMaxHealth() {
}

void AHostileGuntowerModule::OnModuleDied(UHealthComponentBase* Health) {
}

void AHostileGuntowerModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHostileGuntowerModule, ModuleMaxHealth);
    DOREPLIFETIME(AHostileGuntowerModule, CurrentAimRotation);
}

AHostileGuntowerModule::AHostileGuntowerModule() {
    this->ModuleMaxHealth = 1.00f;
}

