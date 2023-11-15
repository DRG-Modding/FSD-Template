#include "DefenseObjective.h"
#include "Net/UnrealNetwork.h"

UDefenseObjective::UDefenseObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefensePoints = 3;
    this->PointsDefended = 0;
    this->DebrisPositioning = NULL;
}

void UDefenseObjective::PointDefended() {
}

void UDefenseObjective::OnRep_PointsRepaired() {
}


void UDefenseObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDefenseObjective, DefensePoints);
    DOREPLIFETIME(UDefenseObjective, PointsDefended);
}


