#include "TerrainDetectBoxComponent.h"

UTerrainDetectBoxComponent::UTerrainDetectBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartDetectOnBeginPlay = true;
    this->OnlyDetectOnServer = true;
    this->NumCornersToExcavate = 7;
    this->NumCornersExcavated = 0;
    this->KillActorOnPointRemoved = false;
}

void UTerrainDetectBoxComponent::StartDetect() {
}


