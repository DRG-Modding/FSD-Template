#include "CoreRift.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"
#include "TerrainPlacementComponent.h"

ACoreRift::ACoreRift(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->Root = (USceneComponent*)RootComponent;
    this->InitialRotationPoint = CreateDefaultSubobject<USceneComponent>(TEXT("InitialRotationComponent"));
    this->InstancedSpikesRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SpikesRootComponent"));
    this->SpikeMeshes.AddDefaulted(3);
    this->SpikeLocationSpline = CreateDefaultSubobject<USplineComponent>(TEXT("SpikelocationComponent"));
    this->terrainPlacement = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("Placement"));
    this->ScaleCurve = NULL;
    this->AlphaCurve = NULL;
    this->ScaleUpInitialDelay = 0.00f;
    this->ScaleUpTime = 5.00f;
    this->BonesToSpawn = 50;
    this->Seed = -1;
    this->InitialRotationPoint->SetupAttachment(RootComponent);
    this->InstancedSpikesRoot->SetupAttachment(RootComponent);
    this->SpikeLocationSpline->SetupAttachment(InstancedSpikesRoot);
    this->terrainPlacement->SetupAttachment(RootComponent);
}

void ACoreRift::SpawnSpikes() {
}

void ACoreRift::ScaleUp() {
}

void ACoreRift::OnRep_Seed() {
}

void ACoreRift::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACoreRift, Seed);
}


