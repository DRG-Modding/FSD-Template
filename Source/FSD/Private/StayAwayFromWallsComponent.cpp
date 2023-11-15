#include "StayAwayFromWallsComponent.h"

UStayAwayFromWallsComponent::UStayAwayFromWallsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameState = NULL;
    this->MaxSpeed = 100.00f;
    this->Acceleration = 10.00f;
    this->BackAcceleration = 20.00f;
    this->PointOffset = 100.00f;
    this->AvoidSpeed = 0.00f;
    this->GoBackSpeed = 0.00f;
    this->Active = true;
}

void UStayAwayFromWallsComponent::SetIsActive(const bool IsActive) {
}


