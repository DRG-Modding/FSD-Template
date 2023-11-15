#include "STLMeshCarverComponent.h"

USTLMeshCarverComponent::USTLMeshCarverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->TerrainMaterial = NULL;
    this->MeshCarver = NULL;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->PreviewEnabled = true;
}


