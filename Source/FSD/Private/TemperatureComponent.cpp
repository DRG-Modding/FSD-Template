#include "TemperatureComponent.h"

class AActor;

bool UTemperatureComponent::TryPushHeatSource(AActor* Target, float Temperature, ETemperatureIntensity Intensity) {
    return false;
}

bool UTemperatureComponent::TryPopHeatSource(AActor* Target, float Temperature, ETemperatureIntensity Intensity) {
    return false;
}

void UTemperatureComponent::ResetTemperature() {
}

float UTemperatureComponent::GetCurrentTemperature() const {
    return 0.0f;
}

void UTemperatureComponent::ChangeTemperature(float Degrees, AActor* Source) {
}

UTemperatureComponent::UTemperatureComponent() {
    this->FrozenDamageBonusScale = 1.00f;
}

