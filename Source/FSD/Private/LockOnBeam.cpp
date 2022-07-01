#include "LockOnBeam.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SceneComponent.h"


ALockOnBeam::ALockOnBeam() {
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
}

