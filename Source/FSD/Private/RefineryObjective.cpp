#include "RefineryObjective.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

URefineryObjective::URefineryObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RefineryState = ERefineryState::Landing;
    this->RefineryPlacement = NULL;
    this->RawMaterialPlacement = NULL;
    this->RawMaterialCount = 3;
    this->bMissionCompleted = false;
    this->bIsFinalBattle = false;
    this->OptionalTunnelRoomID = -1;
}

void URefineryObjective::SpawnWells(AProceduralSetup* Setup, const FVector& rigLocation, float minDistanceBetween, const TArray<FVector2D>& minMaxDistancesToRig) {
}


void URefineryObjective::OnRep_Refinery() {
}

void URefineryObjective::OnRefineryStateChanged(ERefineryState InRefineryState) {
}

FVector URefineryObjective::GetRefinerySpawnLocation(TSubclassOf<AFSDRefinery> NewRefineryClass) {
    return FVector{};
}


void URefineryObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URefineryObjective, Refinery);
}


