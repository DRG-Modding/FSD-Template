#include "InsectSwarmSpawner.h"



void AInsectSwarmSpawner::OnSwarmDestroyed(AActor* DestroyedActor) {
}

AInsectSwarmSpawner::AInsectSwarmSpawner() {
    this->SwarmType = NULL;
    this->SpawnHeightOffset = 100.00f;
    this->AlertDistance = 1000.00f;
    this->respawnDelay = 15.00f;
}

