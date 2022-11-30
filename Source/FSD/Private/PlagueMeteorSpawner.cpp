#include "PlagueMeteorSpawner.h"

APlagueMeteorSpawner::APlagueMeteorSpawner() {
    this->EscortSpawnFromImportantRange = 500.00f;
    this->EscortMinimum2DSpawnDistFromPath = 1000.00f;
    this->EscortMinimumZSpawnDistFromPath = 600.00f;
    this->DropLocationHeightOffset = 0.00f;
    this->ImportantLocationRange = -1.00f;
    this->MeteorActorClassLoaded = NULL;
}

