#include "HeatMaterialComponent.h"

class UMaterialInstanceDynamic;

void UHeatMaterialComponent::OnTemperatureChanged(float Temperature, bool Overheated) {
}

void UHeatMaterialComponent::AddHeatMaterial(UMaterialInstanceDynamic* MaterialInstance) {
}

UHeatMaterialComponent::UHeatMaterialComponent() {
    this->MaxEffect = 1.00f;
}

