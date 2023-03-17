#include "TerrainPlacementComponent.h"

void UTerrainPlacementComponent::RemoveBlockers() {
}

void UTerrainPlacementComponent::AddBlockers(AProceduralSetup* ProceduralSetup, const FTransform& Transform) {
}

UTerrainPlacementComponent::UTerrainPlacementComponent() {
    this->CapsuleType = EDebrisColliderType::Object;
    this->BlockerIDHack = -1;
}

