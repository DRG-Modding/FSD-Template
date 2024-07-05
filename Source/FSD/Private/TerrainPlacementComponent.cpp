#include "TerrainPlacementComponent.h"

UTerrainPlacementComponent::UTerrainPlacementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Stationary;
    this->CapsuleType = EDebrisColliderType::Object;
    this->BlockerIDHack = -1;
    this->BlockerWorld = NULL;
    this->RemoveBlockerOnBeingMatch = false;
    this->RemoveBlockerOnDeath = false;
}

void UTerrainPlacementComponent::RemoveBlockers() {
}

void UTerrainPlacementComponent::OnActorDeath(UHealthComponentBase* Health) {
}

void UTerrainPlacementComponent::MatchStarted() {
}

void UTerrainPlacementComponent::AddBlockers(AProceduralSetup* ProceduralSetup, const FTransform& Transform) {
}


