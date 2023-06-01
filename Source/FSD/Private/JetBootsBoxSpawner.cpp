#include "JetBootsBoxSpawner.h"

AJetBootsBoxSpawner::AJetBootsBoxSpawner() {
    this->MaxSpawnLocationTries = 10;
    this->DebrisPositioning = NULL;
    this->terrainPlacement = NULL;
    this->JetBootsBoxInstance = NULL;
    this->JetBootsBoxClassLoaded = NULL;
}

