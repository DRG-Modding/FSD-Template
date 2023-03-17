#include "DropToTerrainComponent.h"
#include "Net/UnrealNetwork.h"

void UDropToTerrainComponent::StopDropDetection(bool stopFalling) {
}

void UDropToTerrainComponent::OnTerrainRemoved(USceneComponent* Point) {
}

void UDropToTerrainComponent::OnRep_DropTarget() {
}

void UDropToTerrainComponent::BeginDropDetection() {
}

void UDropToTerrainComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDropToTerrainComponent, DropTarget);
}

UDropToTerrainComponent::UDropToTerrainComponent() {
    this->StartActive = false;
    this->FallVelocity = 0.00f;
    this->TerrainTraceMaxDistance = -10000.00f;
    this->IsDetecting = false;
}

