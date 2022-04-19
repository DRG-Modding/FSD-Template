#include "CharacterCameraController.h"

void UCharacterCameraController::ResetFOV(float FadeSpeed) {
}

void UCharacterCameraController::FOVChanged(float NewFOV) {
}

void UCharacterCameraController::FadeToFOVRelative(float NewTargetFov, float FadeSpeed) {
}

void UCharacterCameraController::FadeToFOV(float NewTargetFov, float FadeSpeed) {
}

UCharacterCameraController::UCharacterCameraController() {
    this->StartFOV = 0.00f;
    this->targetFov = 0.00f;
    this->TargetFOVSpeed = 0.00f;
    this->Character = NULL;
    this->Camera = NULL;
}

