#include "AnimNotify_CameraShake.h"

UAnimNotify_CameraShake::UAnimNotify_CameraShake() {
    this->InnerRadius = 100.00f;
    this->OuterRadius = 1000.00f;
    this->ControllerOnly = true;
    this->CameraShake = NULL;
}

