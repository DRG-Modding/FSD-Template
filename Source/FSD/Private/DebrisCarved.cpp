#include "DebrisCarved.h"

UDebrisCarved::UDebrisCarved() {
    this->CarverType = EDebrisCarvedType::Large;
    this->TerrainMaterial = NULL;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->ExpensiveNoise = 0.00f;
    this->CarveCellSize = CarveOptionsCellSize::CARVE_CELL_SIZE_50;
    this->MinNumCarves = 1;
    this->MaxNumCarves = 1;
    this->CarveOffsetRadius = 0.00f;
    this->SpawnAttachClass = NULL;
    this->AttachSpawnOffsetDistance = 0.00f;
}

