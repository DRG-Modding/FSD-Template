#include "CarvedResourceCreator.h"

UCarvedResourceCreator::UCarvedResourceCreator() {
    this->Resource = NULL;
    this->ScaleToResourceDistribution = true;
    this->Positioning = NULL;
    this->ExpensiveNoise = 0.00f;
    this->CarveOffsetRadius = 0.00f;
    this->SpawnAttachClass = NULL;
    this->AttachSpawnOffsetDistance = 0.00f;
    this->TerrainMaterial = NULL;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->CarveCellSize = CarveOptionsCellSize::CARVE_CELL_SIZE_25;
}

