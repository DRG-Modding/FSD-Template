#include "DroneMiningState.h"

UDroneMiningState::UDroneMiningState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DroneMiningTool = NULL;
    this->HeartStoneMateiral = NULL;
    this->StartMiningRange = 0.00f;
    this->MiningRange = 0.00f;
    this->SameHitRadius = 0.00f;
    this->MineRadius = 0.00f;
    this->MiningStrength = 1;
    this->EmbeddedSearchRadius = 0.00f;
}


