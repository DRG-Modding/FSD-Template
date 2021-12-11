#include "DefenseObjective.h"
#include "Net/UnrealNetwork.h"

void UDefenseObjective::PointDefended() {
}

void UDefenseObjective::OnRep_PointsRepaired() {
}


void UDefenseObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDefenseObjective, DefensePoints);
    DOREPLIFETIME(UDefenseObjective, PointsDefended);
}

UDefenseObjective::UDefenseObjective() {
    this->DefensePoints = 3;
    this->PointsDefended = 0;
    this->DebrisPositioning = NULL;
}

