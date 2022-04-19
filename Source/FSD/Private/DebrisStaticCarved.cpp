#include "DebrisStaticCarved.h"

UDebrisStaticCarved::UDebrisStaticCarved() {
    this->CarverType = EDebrisCarvedType::Large;
    this->TerrainMaterial = NULL;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->CarveOffsetRadius = 0.00f;
    this->SpawnAttachClass = NULL;
    this->AttachSpawnOffsetDistance = 0.00f;
}

