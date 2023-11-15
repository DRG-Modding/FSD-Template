#include "FirstPersonSkeletalMeshComponent.h"

UFirstPersonSkeletalMeshComponent::UFirstPersonSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DepthPriorityGroup = SDPG_Foreground;
}

void UFirstPersonSkeletalMeshComponent::SetFirstPersonFOVEnabled(bool bEnabled) {
}

bool UFirstPersonSkeletalMeshComponent::GetSetFirstPersonFOVEnabled() {
    return false;
}

FVector UFirstPersonSkeletalMeshComponent::CalcFirstPersonFOVPositionCorrection(APlayerController* PlayerController, const FVector& origPos) {
    return FVector{};
}


