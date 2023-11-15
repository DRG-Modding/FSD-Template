#include "CoilgunTrailSpawner.h"

UCoilgunTrailSpawner::UCoilgunTrailSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrailSegmentClass = NULL;
    this->SegmentSpawnInterval = 0.10f;
    this->TrailDistance = 1500.00f;
    this->TrailSegmentInterval = 100.00f;
    this->TrailSpawnRange = 500.00f;
}

void UCoilgunTrailSpawner::SpawnSegment() {
}


