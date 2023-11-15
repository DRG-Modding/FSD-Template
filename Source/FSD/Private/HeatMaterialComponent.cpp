#include "HeatMaterialComponent.h"

UHeatMaterialComponent::UHeatMaterialComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxEffect = 1.00f;
}

void UHeatMaterialComponent::OnTemperatureChanged(float Temperature, bool overHeated) {
}

void UHeatMaterialComponent::AddHeatMaterial(UMaterialInstanceDynamic* MaterialInstance) {
}


