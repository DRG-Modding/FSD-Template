#include "GameStats.h"
#include "Net/UnrealNetwork.h"

AGameStats::AGameStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bNetLoadOnClient = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NumberOfPlayersEscapedInPod = 0;
    this->TotalGoldMined = 0.00f;
    this->TotalEnemiesKilled = 0;
    this->MissionHaz = 0;
}

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


