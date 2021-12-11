#include "MeshCarverComponent.h"

void UMeshCarverComponent::Carve() {
}

UMeshCarverComponent::UMeshCarverComponent() {
    this->TerrainMaterial = NULL;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->ExpensiveNoise = 0.00f;
    this->CarverSize = CarveOptionsCellSize::CARVE_CELL_SIZE_100;
}

