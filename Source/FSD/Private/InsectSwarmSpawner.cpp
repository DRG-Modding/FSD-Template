#include "InsectSwarmSpawner.h"

AInsectSwarmSpawner::AInsectSwarmSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SwarmType = NULL;
    this->SpawnHeightOffset = 100.00f;
    this->AlertDistance = 1000.00f;
    this->respawnDelay = 15.00f;
}



void AInsectSwarmSpawner::OnSwarmDestroyed(AActor* DestroyedActor) {
}


