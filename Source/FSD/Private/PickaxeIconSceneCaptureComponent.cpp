#include "PickaxeIconSceneCaptureComponent.h"

UPickaxeIconSceneCaptureComponent::UPickaxeIconSceneCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsFullView = false;
    this->CameraKey = EPickaxePartLocation::Head;
}


