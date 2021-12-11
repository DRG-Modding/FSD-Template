#include "KillEnemiesObjective.h"
#include "Net/UnrealNetwork.h"

class APawn;
class UHealthComponentBase;

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

UKillEnemiesObjective::UKillEnemiesObjective() {
    this->EnemyCount = 0;
    this->ExtraEnemies = 0;
    this->Positioning = NULL;
    this->EnemyTarget = NULL;
    this->EnemiesKilled = 0;
    this->EnemiesToKill = 0;
}

