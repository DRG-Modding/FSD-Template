#include "ShowroomController.h"

UShowroomController::UShowroomController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Stage = NULL;
}

void UShowroomController::SetLightChannels(AActor* Actor) {
}

void UShowroomController::RotateShowroom(float Pitch, float Yaw) {
}

void UShowroomController::ResetShowroomRotation() {
}

FRotator UShowroomController::GetShowroomRotation() {
    return FRotator{};
}


