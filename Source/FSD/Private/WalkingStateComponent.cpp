#include "WalkingStateComponent.h"

class APlayerCharacter;
class UTrackBuilderMovement;

void UWalkingStateComponent::TrackGrindCallback(APlayerCharacter* User, EInputKeys Key) {
}

void UWalkingStateComponent::Server_StartTrackMovement_Implementation(UTrackBuilderMovement* InMovement) {
}
bool UWalkingStateComponent::Server_StartTrackMovement_Validate(UTrackBuilderMovement* InMovement) {
    return true;
}

void UWalkingStateComponent::Server_SetIsSliding_Implementation(bool isSliding) {
}
bool UWalkingStateComponent::Server_SetIsSliding_Validate(bool isSliding) {
    return true;
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

