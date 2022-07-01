#include "ShowroomStage.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"


USceneCaptureComponent2D* AShowroomStage::GetActiveCaptureComponent() {
    return NULL;
}


AShowroomStage::AShowroomStage() {
    this->SceneCapure = NULL;
    this->ActiveCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture"));
    this->ControllerClass = NULL;
    this->ControllerInstance = NULL;
    //this->SceneCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture"));
    this->MinPitch = 0.00f;
    this->MaxPitch = 0.00f;
    this->CameraFocusPoint = CreateDefaultSubobject<USceneComponent>(TEXT("CameraFocusPoint"));
}

