#include "NoMovementStateComponent.h"

UNoMovementStateComponent::UNoMovementStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 7;
    this->DisableHeadLightOnEnter = true;
    this->EnableHeadLightOnExit = true;
}


