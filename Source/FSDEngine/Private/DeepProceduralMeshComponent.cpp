#include "DeepProceduralMeshComponent.h"

class UPhysicalMaterial;
class UTerrainMaterialCore;

UTerrainMaterialCore* UDeepProceduralMeshComponent::FindTerrainMaterialFromPhysicalMaterial(UPhysicalMaterial* Material) const {
    return NULL;
}

UDeepProceduralMeshComponent::UDeepProceduralMeshComponent() {
    this->ProcMeshBodySetup = NULL;
}

