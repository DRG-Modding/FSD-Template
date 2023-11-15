#include "LockOnBeam.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"

ALockOnBeam::ALockOnBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->BeamSpline = CreateDefaultSubobject<USplineComponent>(TEXT("BeamSpline"));
    this->BeamMeshComponent01 = CreateDefaultSubobject<USplineMeshComponent>(TEXT("BeamMeshComponent01"));
    this->BeamMeshComponent02 = CreateDefaultSubobject<USplineMeshComponent>(TEXT("BeamMeshComponent02"));
    this->BeamMeshComponent03 = CreateDefaultSubobject<USplineMeshComponent>(TEXT("BeamMeshComponent03"));
    this->BlockedNodeComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BlockedNodeComponent"));
    this->PreviewLocationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PreviewEndLocation"));
    this->BeamMaterial = NULL;
    this->BlockedBeamMaterial = NULL;
    this->SeekerMaterial = NULL;
    this->BeamThicknessScale = 1.00f;
    this->BeamSpline->SetupAttachment(RootComponent);
    this->BeamMeshComponent01->SetupAttachment(BeamSpline);
    this->BeamMeshComponent02->SetupAttachment(BeamSpline);
    this->BeamMeshComponent03->SetupAttachment(BeamSpline);
    this->BlockedNodeComponent->SetupAttachment(BeamSpline);
    this->PreviewLocationComponent->SetupAttachment(RootComponent);
}



