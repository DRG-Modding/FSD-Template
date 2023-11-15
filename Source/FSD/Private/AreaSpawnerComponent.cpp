#include "AreaSpawnerComponent.h"

UAreaSpawnerComponent::UAreaSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorToSpawn = NULL;
    this->PathfinderSize = DeepPathFinderSize::Small;
    this->ChanceToSpawn = 1.00f;
}

void UAreaSpawnerComponent::SpawnInArea(const FVector& Origin, float Radius, float maxVerticalDistance, APawn* Instigator) {
}


