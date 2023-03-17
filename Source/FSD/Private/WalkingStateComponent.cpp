#include "WalkingStateComponent.h"

void UWalkingStateComponent::TrackGrindCallback(APlayerCharacter* User, EInputKeys Key) {
}

void UWalkingStateComponent::Server_StartTrackMovement_Implementation(UTrackBuilderMovement* InMovement) {
}

void UWalkingStateComponent::Server_SetIsSliding_Implementation(bool isSliding) {
}

void UWalkingStateComponent::JumpPress() {
}

UWalkingStateComponent::UWalkingStateComponent() {
    this->SlidingEnabled = true;
    this->ShowDebug = false;
    this->SlideAngle = 70.00f;
    this->SlideAcceleration = 4.00f;
    this->MaxSlideSpeed = 750.00f;
    this->MaxClimbDistance = 50.00f;
    this->AudioSliding = NULL;
    this->IceSliding = NULL;
    this->AudioComponentSliding = NULL;
    this->AudioComponentIceSliding = NULL;
}

