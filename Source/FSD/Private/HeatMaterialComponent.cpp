#include "HeatMaterialComponent.h"

UHeatMaterialComponent::UHeatMaterialComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxEffect = 1.00f;
}

void UHeatMaterialComponent::OnTemperatureChanged(float temperature, bool overheated) {
}

void UHeatMaterialComponent::AddHeatMaterial(UMaterialInstanceDynamic* MaterialInstance) {
}


