#include "TemperatureComponent.h"

UTemperatureComponent::UTemperatureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FrozenDamageBonusScale = 1.00f;
}

bool UTemperatureComponent::TryPushHeatSource(AActor* Target, float temperature, ETemperatureIntensity Intensity) {
    return false;
}

bool UTemperatureComponent::TryPopHeatSource(AActor* Target, float temperature, ETemperatureIntensity Intensity) {
    return false;
}

void UTemperatureComponent::ResetTemperature() {
}

bool UTemperatureComponent::IsOnFire() const {
    return false;
}

bool UTemperatureComponent::IsFrozen() const {
    return false;
}

float UTemperatureComponent::GetCurrentTemperature() const {
    return 0.0f;
}

void UTemperatureComponent::ChangeTemperature(float Degrees, AActor* Source) {
}


