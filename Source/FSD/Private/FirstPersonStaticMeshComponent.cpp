#include "FirstPersonStaticMeshComponent.h"

UFirstPersonStaticMeshComponent::UFirstPersonStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DepthPriorityGroup = SDPG_Foreground;
    this->EnabledFPFOV = true;
}


