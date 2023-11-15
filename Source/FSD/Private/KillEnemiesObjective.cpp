#include "KillEnemiesObjective.h"
#include "Net/UnrealNetwork.h"

UKillEnemiesObjective::UKillEnemiesObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyCount = 0;
    this->ExtraEnemies = 0;
    this->Positioning = NULL;
    this->EnemyTarget = NULL;
    this->EnemiesKilled = 0;
    this->EnemiesToKill = 0;
}

void UKillEnemiesObjective::RegisterTargetSpawned(APawn* Target) const {
}


void UKillEnemiesObjective::OnTargetKilled(UHealthComponentBase* Health) {
}

void UKillEnemiesObjective::OnRep_EnemiesToKill(int32 prevAmount) {
}

void UKillEnemiesObjective::OnRep_EnemiesKilled(int32 prevAmount) {
}

void UKillEnemiesObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UKillEnemiesObjective, EnemiesKilled);
    DOREPLIFETIME(UKillEnemiesObjective, EnemiesToKill);
}


