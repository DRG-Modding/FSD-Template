#include "TerrainDetectBoxComponent.h"

void UTerrainDetectBoxComponent::StartDetect() {
}

UTerrainDetectBoxComponent::UTerrainDetectBoxComponent() {
    this->StartDetectOnBeginPlay = true;
    this->OnlyDetectOnServer = true;
    this->NumCornersToExcavate = 7;
    this->NumCornersExcavated = 0;
    this->KillActorOnPointRemoved = false;
}

