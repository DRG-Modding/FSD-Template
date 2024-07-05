#include "ClusterbombSpawner.h"

UClusterbombSpawner::UClusterbombSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClusterbombClass = NULL;
    this->GrenadeFragments = 0;
    this->VelocityInheritance = 0.00f;
}

void UClusterbombSpawner::ReleaseCluster() {
}


