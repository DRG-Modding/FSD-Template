#include "TerrainDetectComponent.h"

void UTerrainDetectComponent::UpdateDetectLocation() {
}

void UTerrainDetectComponent::StopDetect() {
}

void UTerrainDetectComponent::StartDetect() {
}

UTerrainDetectComponent::UTerrainDetectComponent() {
    this->StartDetectOnBeginPlay = true;
    this->OnlyDetectOnServer = true;
    this->KillActorOnPointRemoved = false;
    this->DetectorId = -1;
}

