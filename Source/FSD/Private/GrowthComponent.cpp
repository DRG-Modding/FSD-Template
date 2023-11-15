#include "GrowthComponent.h"

UGrowthComponent::UGrowthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScaleComponent = NULL;
}

void UGrowthComponent::StopGrow() {
}

void UGrowthComponent::StartGrow(USceneComponent* aComponentToScale, FRuntimeFloatCurve aCurve) {
}


