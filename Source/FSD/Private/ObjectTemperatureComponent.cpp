#include "ObjectTemperatureComponent.h"

UObjectTemperatureComponent::UObjectTemperatureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TemperatureChangeScale = 1.00f;
    this->BurnTemperature = 30.00f;
    this->DouseFireTemperature = 0.00f;
    this->CoolingRate = 10;
    this->IsHeatsourceWhenOnFire = true;
    this->OnFireHeatRange = 150.00f;
}

void UObjectTemperatureComponent::TimerCallback() {
}

void UObjectTemperatureComponent::OnDeath(UHealthComponentBase* HealthComponent) {
}


