#include "GameStats.h"
#include "Net/UnrealNetwork.h"

class UCappedResource;

void AGameStats::OnPlayerMinedGold(UCappedResource* Resource, float Amount) {
}

void AGameStats::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGameStats, NumberOfPlayersEscapedInPod);
    DOREPLIFETIME(AGameStats, TotalGoldMined);
    DOREPLIFETIME(AGameStats, TotalEnemiesKilled);
    DOREPLIFETIME(AGameStats, MissionHaz);
    DOREPLIFETIME(AGameStats, EventKeys);
}

AGameStats::AGameStats() {
    this->NumberOfPlayersEscapedInPod = 0;
    this->TotalGoldMined = 0.00f;
    this->TotalEnemiesKilled = 0;
    this->MissionHaz = 0;
}

