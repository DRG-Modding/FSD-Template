#include "EliminationObjective.h"
#include "Net/UnrealNetwork.h"

class AFSDPawn;
class UHealthComponentBase;
class UEnemyDescriptor;

void UEliminationObjective::RegisterEliminationTargets(const TArray<AFSDPawn*>& Targets) {
}



void UEliminationObjective::OnTargetKilled(UHealthComponentBase* Health) {
}

void UEliminationObjective::OnRep_EnemiesToKill(int32 prevAmount) {
}

void UEliminationObjective::OnRep_EnemiesKilled(int32 prevAmount) {
}

TArray<UEnemyDescriptor*> UEliminationObjective::GetNextTargetInQueue() {
    return TArray<UEnemyDescriptor*>();
}

void UEliminationObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEliminationObjective, EnemiesKilled);
    DOREPLIFETIME(UEliminationObjective, EnemiesToKill);
}

UEliminationObjective::UEliminationObjective() {
    this->ObjectCount = 0;
    this->Positioning = NULL;
    this->CaveInfluencer = NULL;
    this->DebrisRadius = 1500.00f;
    this->EnemiesKilled = 0;
    this->EnemiesToKill = 0;
}

