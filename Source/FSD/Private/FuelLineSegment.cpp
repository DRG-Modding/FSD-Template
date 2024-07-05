#include "FuelLineSegment.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SimpleHealthComponent.h"

AFuelLineSegment::AFuelLineSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FuelLineSplineMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("FuelLineSplineMesh"));
    this->FuelLineSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("FuelLineSplineComponent"));
    this->FuelLineEndPostMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FuelLineEndPostMesh"));
    this->DeconstructHealthComponent = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("DeconstructHealthComponent"));
    this->PreviewEndPostLocation = CreateDefaultSubobject<USceneComponent>(TEXT("PreviewEndPostLocation"));
    this->EndPostHeightOffset = 0.00f;
    this->MaxLength = 500.00f;
    this->bHasMaxTurnAngle = false;
    this->MaxTurnAngle = 0.00f;
    this->FuelLineSplineMesh->SetupAttachment(RootComponent);
    this->FuelLineSplineComponent->SetupAttachment(RootComponent);
    this->FuelLineEndPostMesh->SetupAttachment(RootComponent);
    this->PreviewEndPostLocation->SetupAttachment(RootComponent);
}

void AFuelLineSegment::ClientUpdateStartTransform_Implementation(const FVector& NewStartLocation) {
}

void AFuelLineSegment::ChangeStartTransform(const FTransform& ChangedStartLocation) {
}

void AFuelLineSegment::CallbackOnDeath(UHealthComponentBase* InHealthComponent) {
}

void AFuelLineSegment::CallbackCanStartNextSegmentChanged(bool InCanStart) {
}


