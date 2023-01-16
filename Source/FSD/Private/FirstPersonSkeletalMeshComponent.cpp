#include "FirstPersonSkeletalMeshComponent.h"

class APlayerController;

void UFirstPersonSkeletalMeshComponent::SetFirstPersonFOVEnabled(bool bEnabled) {
}

bool UFirstPersonSkeletalMeshComponent::GetSetFirstPersonFOVEnabled() {
    return false;
}

FVector UFirstPersonSkeletalMeshComponent::CalcFirstPersonFOVPositionCorrection(APlayerController* PlayerController, const FVector& origPos) {
    return FVector{};
}

UFirstPersonSkeletalMeshComponent::UFirstPersonSkeletalMeshComponent() {
}

