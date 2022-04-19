#include "DropToTerrainComponent.h"

class USceneComponent;

void UDropToTerrainComponent::StopDropDetection(bool stopFalling) {
}

void UDropToTerrainComponent::SetParentPositionOnAll_Implementation(FVector CurrentParentLocation) {
}
bool UDropToTerrainComponent::SetParentPositionOnAll_Validate(FVector CurrentParentLocation) {
    return true;
}

void UDropToTerrainComponent::OnTerrainRemoved(USceneComponent* Point) {
}

void UDropToTerrainComponent::BeginDropDetection() {
}

UDropToTerrainComponent::UDropToTerrainComponent() {
    this->FallVelocity = 0.00f;
    this->TerrainTraceMaxDistance = -10000.00f;
    this->IsDetecting = false;
}

