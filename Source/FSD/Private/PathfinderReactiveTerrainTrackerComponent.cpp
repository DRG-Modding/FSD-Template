#include "PathfinderReactiveTerrainTrackerComponent.h"

UPathfinderReactiveTerrainTrackerComponent::UPathfinderReactiveTerrainTrackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentPhysicalMaterial = NULL;
    this->StatusEffectsComponent = NULL;
}


