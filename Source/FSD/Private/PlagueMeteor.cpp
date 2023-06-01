#include "PlagueMeteor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DamageComponent.h"
#include "Net/UnrealNetwork.h"
#include "TerrainPlacementComponent.h"

void APlagueMeteor::SignalEventStarted() {
}

void APlagueMeteor::SignalEventEnded(bool wasSuccess) {
}

void APlagueMeteor::SetStage(int32 Stage) {
}

void APlagueMeteor::SetDropTarget(const FVector& Location) {
}

void APlagueMeteor::ResetStage() {
}

void APlagueMeteor::RegressStage() {
}


void APlagueMeteor::OnRep_DropInfo() {
}

void APlagueMeteor::OnRep_CrackStage() {
}





bool APlagueMeteor::HasLandedOnTopOfRefineryPipes(float minDistanceToPipes) const {
    return false;
}

TArray<ARockCrackerPod*> APlagueMeteor::GetPods() {
    return TArray<ARockCrackerPod*>();
}

ARockCrackerPod* APlagueMeteor::GetPodAtIndex(int32 Index) {
    return NULL;
}

int32 APlagueMeteor::GetNumActivePods() const {
    return 0;
}



void APlagueMeteor::DropRockCrackerPods(int32 Amount, float MinRadius, float maRadius, AProceduralSetup* Setup) {
}


void APlagueMeteor::AdvanceStage() {
}

void APlagueMeteor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlagueMeteor, CrackStage);
    DOREPLIFETIME(APlagueMeteor, DropInfo);
    DOREPLIFETIME(APlagueMeteor, SpawnedPods);
}

APlagueMeteor::APlagueMeteor() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MeteorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeteorMesh"));
    this->terrainPlacement = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("terrainPlacement"));
    this->ImpactDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("ImpactDamgage"));
    this->ManuallyTargeted = false;
    this->CrackStage = 0;
    this->DropzoneIndicatorClass = NULL;
    this->DropZoneIndicator = NULL;
    this->Positioning = NULL;
    this->IndicatorTime = 5.00f;
    this->VisualsTime = 10.00f;
    this->NearImpactTime = 0.00f;
    this->LastAudioTime = 0.00f;
    this->LocationVariance = 1000.00f;
    this->RockCrackerPod = NULL;
    this->RockCrackerIndicator = NULL;
    this->RockCrackerPodPositioning = NULL;
}

