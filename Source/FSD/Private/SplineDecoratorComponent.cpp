#include "SplineDecoratorComponent.h"

class USplineComponent;
class UMaterialInterface;

void USplineDecoratorComponent::Update(float DeltaTime) {
}

void USplineDecoratorComponent::SetUpdateContinuously(bool InContinuously) {
}

void USplineDecoratorComponent::SetSplineComponentAndMaterial(USplineComponent* InSplineComponent, int32 ElementIndex, UMaterialInterface* Material) {
}

void USplineDecoratorComponent::SetSplineComponent(USplineComponent* InSplineComponent) {
}

USplineDecoratorComponent::USplineDecoratorComponent() {
    this->DistanceBetweenInstances = 25.00f;
    this->StartIndex = 0;
    this->EndIndex = 0;
    this->bUpdateContinuously = false;
    this->DistanceProgress = 1.00f;
    this->SplineComponent = NULL;
    this->Phase = 0.00f;
}

