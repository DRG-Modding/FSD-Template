#include "TracerManager.h"

class UParticleSystem;

void UTracerManager::AddTracer(FVector Origin, const FVector& Destination, float Speed, UParticleSystem* particle, float MinDistance, float Offset, UParticleSystem* Trail) {
}

UTracerManager::UTracerManager() {
    this->StartScale = 0.00f;
    this->WhizByStartDistance = 500.00f;
    this->WhizByMaxDistanceFromTrajectory = 250.00f;
    this->WhizBySpeed = 1000.00f;
}

