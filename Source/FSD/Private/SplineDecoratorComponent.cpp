#include "SplineDecoratorComponent.h"

USplineDecoratorComponent::USplineDecoratorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceBetweenInstances = 25.00f;
    this->StartIndex = 0;
    this->EndIndex = 0;
    this->bUpdateContinuously = false;
    this->DistanceProgress = 1.00f;
    this->SplineComponent = NULL;
    this->Phase = 0.00f;
}

void USplineDecoratorComponent::Update(float DeltaTime) {
}

void USplineDecoratorComponent::SetUpdateContinuously(bool InContinuously) {
}

void USplineDecoratorComponent::SetSplineComponentAndMaterial(USplineComponent* InSplineComponent, int32 ElementIndex, UMaterialInterface* Material) {
}

void USplineDecoratorComponent::SetSplineComponent(USplineComponent* InSplineComponent) {
}


