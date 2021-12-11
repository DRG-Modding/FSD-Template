#include "ShowroomController.h"

class AActor;

void UShowroomController::SetLightChannels(AActor* Actor) {
}

void UShowroomController::RotateShowroom(float Pitch, float Yaw) {
}

void UShowroomController::ResetShowroomRotation() {
}

FRotator UShowroomController::GetShowroomRotation() {
    return FRotator{};
}

UShowroomController::UShowroomController() {
    this->Stage = NULL;
}

