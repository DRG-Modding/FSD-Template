#include "AutoCarverComponent.h"

void UAutoCarverComponent::ForceCarve() {
}

UAutoCarverComponent::UAutoCarverComponent() {
    this->TerrainMaterial = NULL;
    this->Frequency = 1.00f;
    this->ExpensiveNoise = 0.00f;
    this->MinDistanceMoved = 50.00f;
    this->Filter = ECarveFilterType::ReplaceAll;
}

