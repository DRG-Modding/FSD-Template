#include "ShowroomStage.h"

class USceneCaptureComponent2D;


USceneCaptureComponent2D* AShowroomStage::GetActiveCaptureComponent() {
    return NULL;
}


AShowroomStage::AShowroomStage() {
    this->SceneCapure = NULL;
    this->ControllerClass = NULL;
    this->ControllerInstance = NULL;
    this->MinPitch = 0.00f;
    this->MaxPitch = 0.00f;
}

