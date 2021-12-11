#include "DeepProceduralMeshComponent.h"

class UTerrainMaterialCore;
class UPhysicalMaterial;

UTerrainMaterialCore* UDeepProceduralMeshComponent::FindTerrainMaterialFromPhysicalMaterial(UPhysicalMaterial* Material) const {
    return NULL;
}

UDeepProceduralMeshComponent::UDeepProceduralMeshComponent() {
    this->ProcMeshBodySetup = NULL;
}

