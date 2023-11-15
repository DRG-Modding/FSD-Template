#include "DroneMiningToolBase.h"

UDroneMiningToolBase::UDroneMiningToolBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->range = 200.00f;
    this->SameHitDistance = 10.00f;
    this->MineRadius = 55.00f;
    this->MineStrength = 1;
}

void UDroneMiningToolBase::StopMining() {
}

void UDroneMiningToolBase::StartMining() {
}

void UDroneMiningToolBase::SpawnEffects_Implementation(UTerrainMaterial* aTerrainMaterial, bool aParialHit, FVector_NetQuantize aLocation, FVector_NetQuantize aImpactNormal) {
}


