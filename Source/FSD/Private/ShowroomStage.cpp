#include "ShowroomStage.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"

AShowroomStage::AShowroomStage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SceneCapure = NULL;
    this->ActiveCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture"));
    this->ControllerClass = NULL;
    this->ControllerInstance = NULL;
    this->SceneCapture = (USceneCaptureComponent2D*)ActiveCaptureComponent;
    this->MinPitch = 0.00f;
    this->MaxPitch = 0.00f;
    this->CameraFocusPoint = CreateDefaultSubobject<USceneComponent>(TEXT("CameraFocusPoint"));
    this->ActiveCaptureComponent->SetupAttachment(CameraFocusPoint);
    this->SceneCapture->SetupAttachment(CameraFocusPoint);
    this->CameraFocusPoint->SetupAttachment(RootComponent);
}


USceneCaptureComponent2D* AShowroomStage::GetActiveCaptureComponent() {
    return NULL;
}



