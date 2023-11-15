#include "PheromoneSpawnerComponent.h"

UPheromoneSpawnerComponent::UPheromoneSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackPositioningCostModifier = 2.00f;
    this->enemy = NULL;
}


