#include "BallisticMovementComponent.h"
#include "Net/UnrealNetwork.h"

UBallisticMovementComponent::UBallisticMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GravityMultiplier = 1.00f;
    this->LaunchAngleOffset = 15.00f;
    this->MinMoveDistance = 500.00f;
    this->SampleZOffset = 25.00f;
    this->RotateDelay = 0.00f;
    this->LaunchDelay = 0.00f;
    this->LandingDelay = 0.00f;
    this->bIsMoveActive = false;
    this->AnticipatedTotalAirborneTime = 0.00f;
    this->Pitch = 0.00f;
}

void UBallisticMovementComponent::StartMovement_Implementation(FVector NewLaunchVelocity, FRotator targetRotator, float flightTime) {
}

void UBallisticMovementComponent::OnRep_LaunchVelocity() {
}

bool UBallisticMovementComponent::IsMoveActive() const {
    return false;
}

bool UBallisticMovementComponent::IsAnimating() const {
    return false;
}

void UBallisticMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBallisticMovementComponent, bIsMoveActive);
    DOREPLIFETIME(UBallisticMovementComponent, LaunchVelocity);
    DOREPLIFETIME(UBallisticMovementComponent, TargetRotation);
    DOREPLIFETIME(UBallisticMovementComponent, AnticipatedTotalAirborneTime);
    DOREPLIFETIME(UBallisticMovementComponent, Pitch);
}


