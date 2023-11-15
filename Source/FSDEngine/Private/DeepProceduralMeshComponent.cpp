#include "DeepProceduralMeshComponent.h"

UDeepProceduralMeshComponent::UDeepProceduralMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSelectable = false;
    this->ProcMeshBodySetup = NULL;
}

UTerrainMaterialCore* UDeepProceduralMeshComponent::FindTerrainMaterialFromPhysicalMaterial(UPhysicalMaterial* Material) const {
    return NULL;
}


