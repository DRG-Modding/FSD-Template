#include "LevelGenerationCarverComponent.h"

ULevelGenerationCarverComponent::ULevelGenerationCarverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshCarver = NULL;
    this->ConvexCarver = NULL;
    this->StaticMeshCarver = NULL;
    this->TerrainMaterial = NULL;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->ConvexExpensiveNoise = 0.00f;
    this->CarveCellSize = CarveOptionsCellSize::CARVE_CELL_SIZE_50;
    this->PreviewEnabled = true;
    this->CarvingDisabled = false;
    this->DestroyOwnerOnCarve = false;
    this->DestroySelfAndChilded = false;
    this->SelfActivate = false;
}

void ULevelGenerationCarverComponent::OnCarvedCallback() {
}


