#include "RotatingSceneComponent.h"

URotatingSceneComponent::URotatingSceneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BobbingSpeed = 0.00f;
    this->BobbingSize = 0.00f;
    this->Sweep = false;
    this->ForceParentUp = false;
    this->TeleportMode = ETeleportType::None;
}


