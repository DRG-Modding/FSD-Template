#include "InfectionPointCleaningComponent.h"
#include "Net/UnrealNetwork.h"

void UInfectionPointCleaningComponent::Reset() {
}

void UInfectionPointCleaningComponent::OnRep_InfectionPoints(TArray<TEnumAsByte<ECleanedStatus>> oldInfectionPoints) {
}

void UInfectionPointCleaningComponent::InitInfectionPoints(const TArray<UMeshComponent*>& outerMeshes, const TArray<UMeshComponent*>& innerMeshes) {
}

int32 UInfectionPointCleaningComponent::GetRequiredCleanCount() const {
    return 0;
}

int32 UInfectionPointCleaningComponent::GetRemainingInfectedPoints() const {
    return 0;
}

int32 UInfectionPointCleaningComponent::GetNumberOfInfectedPoints() const {
    return 0;
}

void UInfectionPointCleaningComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInfectionPointCleaningComponent, InfectionPoints);
}

UInfectionPointCleaningComponent::UInfectionPointCleaningComponent() {
    this->bIsInitialized = false;
    this->bHasBeenReplicated = false;
    this->CleanedParticles = NULL;
    this->particleScale = 1.00f;
    this->outerLayerCleaned = false;
}

