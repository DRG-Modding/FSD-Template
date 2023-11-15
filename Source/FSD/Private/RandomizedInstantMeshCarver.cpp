#include "RandomizedInstantMeshCarver.h"

ARandomizedInstantMeshCarver::ARandomizedInstantMeshCarver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TerrainMaterial = NULL;
    this->Filter = ECarveFilterType::ReplaceAll;
}


