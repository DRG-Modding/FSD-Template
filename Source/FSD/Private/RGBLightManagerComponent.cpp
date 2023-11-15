#include "RGBLightManagerComponent.h"

URGBLightManagerComponent::URGBLightManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NewColorsInterval = 0.50f;
    this->NewColorsVariance = 0.00f;
}

void URGBLightManagerComponent::StopRgb() {
}

void URGBLightManagerComponent::StartRgb() {
}


