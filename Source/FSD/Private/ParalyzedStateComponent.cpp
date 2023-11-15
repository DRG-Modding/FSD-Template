#include "ParalyzedStateComponent.h"

UParalyzedStateComponent::UParalyzedStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 4;
    this->CameraArmHeightOffset = -50.00f;
    this->CameraArmSpeed = 1.00f;
}


