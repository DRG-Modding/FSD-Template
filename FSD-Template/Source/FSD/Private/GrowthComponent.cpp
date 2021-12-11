#include "GrowthComponent.h"

class USceneComponent;

void UGrowthComponent::StopGrow() {
}

void UGrowthComponent::StartGrow(USceneComponent* aComponentToScale, FRuntimeFloatCurve aCurve) {
}

UGrowthComponent::UGrowthComponent() {
    this->ScaleComponent = NULL;
}

