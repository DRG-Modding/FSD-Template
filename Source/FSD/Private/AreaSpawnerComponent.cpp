#include "AreaSpawnerComponent.h"

class APawn;

void UAreaSpawnerComponent::SpawnInArea(const FVector& Origin, float Radius, float maxVerticalDistance, APawn* Instigator) {
}

UAreaSpawnerComponent::UAreaSpawnerComponent() {
    this->ActorToSpawn = NULL;
    this->PathfinderSize = DeepPathFinderSize::Small;
    this->ChanceToSpawn = 1.00f;
}

