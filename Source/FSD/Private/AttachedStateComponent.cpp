#include "AttachedStateComponent.h"

UAttachedStateComponent::UAttachedStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 14;
    this->DisableHeadLightOnEnter = true;
    this->EnableHeadLightOnExit = true;
    this->MaxPitch = 35.00f;
}


