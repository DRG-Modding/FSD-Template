#include "LevelGenerationCarver.h"

FLevelGenerationCarver::FLevelGenerationCarver() {
    this->MeshCarver = NULL;
    this->ConvexCarver = NULL;
    this->StaticMeshCarver = NULL;
    this->ConvexExpensiveNoise = 0.00f;
    this->CarveCellSize = CarveOptionsCellSize::CARVE_CELL_SIZE_25;
    this->TerrainMaterial = NULL;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->ToBeDiscarded = false;
}

