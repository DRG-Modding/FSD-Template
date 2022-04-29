#include "SplinePlant.h"
#include "Net/UnrealNetwork.h"
#include "Components/SplineComponent.h"
#include "Components/SceneComponent.h"
#include "Components/AudioComponent.h"

void ASplinePlant::SetTargetPlantLengthPercent(float InTargetPercent, float InPercentPerSecond, float InEaseExp) {
}

void ASplinePlant::SetTargetPlantLength(float InTargetLength, float InDistancePerSecond, float InEaseExp) {
}

void ASplinePlant::SetPlantLengthPercent(float InPercent) {
}

void ASplinePlant::ResetSpline() {
}

void ASplinePlant::ResetScale() {
}

void ASplinePlant::ReceivePrepareSpline_Implementation(USplineComponent* InSplineComponent, int32 InSeed) {
}




float ASplinePlant::GetPlantTargetLengthPercent() const {
    return 0.0f;
}

float ASplinePlant::GetPlantLengthPercent() const {
    return 0.0f;
}

FTransform ASplinePlant::GetNearestLocationToLocalPlayer() const {
    return FTransform{};
}

float ASplinePlant::GetFullPlantLength() const {
    return 0.0f;
}

void ASplinePlant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASplinePlant, Seed);
}

ASplinePlant::ASplinePlant() {
    this->PlantSpline = CreateDefaultSubobject<USplineComponent>(TEXT("PlantSpline"));
    this->PlantEndPoint = CreateDefaultSubobject<USceneComponent>(TEXT("PlantEndPoint"));
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    this->AudioExtending = NULL;
    this->AudioRetracting = NULL;
    this->bEnabledSegmentCollision = false;
    this->CarveRadius = 60.00f;
    this->SegmentForwardAxis = ESplineMeshAxis::X;
    this->SegmentLength = 100.00f;
    this->SegmentWidthScale = 1.00f;
    this->SegmentHeightScale = 1.00f;
    this->PreviewLengthPercent = 1.00f;
    this->PreviewSeed = 0;
    this->SplineInstance = NULL;
    this->SegmentMesh = NULL;
    this->Seed = -1;
}

