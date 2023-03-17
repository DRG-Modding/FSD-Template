#include "ProspectorObjective.h"
#include "Net/UnrealNetwork.h"

void UProspectorObjective::OnRep_ActiveProspector() {
}

void UProspectorObjective::OnProspectorDeath(UHealthComponentBase* Health) {
}

bool UProspectorObjective::IsProspectorDead() const {
    return false;
}

void UProspectorObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UProspectorObjective, ActiveProspector);
}

UProspectorObjective::UProspectorObjective() {
    this->DebrisPositioning = NULL;
}

