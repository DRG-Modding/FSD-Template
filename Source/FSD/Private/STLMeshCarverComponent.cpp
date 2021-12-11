#include "STLMeshCarverComponent.h"

USTLMeshCarverComponent::USTLMeshCarverComponent() {
    this->TerrainMaterial = NULL;
    this->MeshCarver = NULL;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->PreviewEnabled = true;
}

