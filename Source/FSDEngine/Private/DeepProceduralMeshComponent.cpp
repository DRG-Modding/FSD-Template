#include "DeepProceduralMeshComponent.h"

UTerrainMaterialCore* UDeepProceduralMeshComponent::FindTerrainMaterialFromPhysicalMaterial(UPhysicalMaterial* Material) const {
    return NULL;
}

UDeepProceduralMeshComponent::UDeepProceduralMeshComponent() {
    this->ProcMeshBodySetup = NULL;
}

