#include "FirstPersonPointLightComponent.h"

UFirstPersonPointLightComponent::UFirstPersonPointLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CastShadows = false;
}


