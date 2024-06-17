#include "RefinerySecondaryObjective.h"
#include "Net/UnrealNetwork.h"

URefinerySecondaryObjective::URefinerySecondaryObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RawMaterialPlacement = NULL;
    this->RawmaterialMinDistanceToDropPod = 0.00f;
    this->ExtractorPositioning = NULL;
    this->ExtractorLandingDistance = 0.00f;
    this->ExtractMinZDistanceToRawMaterial = 0.00f;
    this->State = ERefinerySecondaryState::Started;
    this->ExtractionProgress = 0;
    this->ExtractionDuration = 0.00f;
    this->ExtractorPodInstance = NULL;
    this->RefineryWellInstance = NULL;
}

void URefinerySecondaryObjective::StartExtraction() {
}

void URefinerySecondaryObjective::SetWellHasSpawned(AActor* extractor) {
}

void URefinerySecondaryObjective::SetWellAndExtractorConnected() {
}

void URefinerySecondaryObjective::SetPipelineBuild() {
}


void URefinerySecondaryObjective::OnRep_State() {
}

void URefinerySecondaryObjective::OnRep_ExtractorPodInstance() {
}

void URefinerySecondaryObjective::OnRep_ExtractionProgress() {
}

void URefinerySecondaryObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URefinerySecondaryObjective, State);
    DOREPLIFETIME(URefinerySecondaryObjective, ExtractionProgress);
    DOREPLIFETIME(URefinerySecondaryObjective, ExtractorPodInstance);
}


