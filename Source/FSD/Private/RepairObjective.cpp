#include "RepairObjective.h"
#include "Net/UnrealNetwork.h"

class URepairableComponent;

void URepairObjective::OnRep_RepairedObjectives() {
}

void URepairObjective::OnRep_ObjectivesToRepair() {
}

void URepairObjective::OnObjectiveRepaired(URepairableComponent* repairable) {
}


void URepairObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URepairObjective, RepairedObjectives);
    DOREPLIFETIME(URepairObjective, ObjectivesToRepair);
}

URepairObjective::URepairObjective() {
    this->RepairedObjectives = 0;
    this->ObjectivesToRepair = 3;
    this->RepairObjectiveResource = NULL;
    this->Positioning = NULL;
    this->RepairResourcesPerActor = 25;
    this->RepairResourceDistanceFromActor = 2000.00f;
    this->MinRepairObjectiveDistanceToLandingZone = 1000.00f;
}

