#include "TerrainDetectComponent.h"

UTerrainDetectComponent::UTerrainDetectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Stationary;
    this->StartDetectOnBeginPlay = true;
    this->OnlyDetectOnServer = true;
    this->KillActorOnPointRemoved = false;
    this->DetectorId = -1;
}

void UTerrainDetectComponent::UpdateDetectLocation() {
}

void UTerrainDetectComponent::StopDetect() {
}

void UTerrainDetectComponent::StartDetect() {
}


