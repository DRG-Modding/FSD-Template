#include "FuelLineSegment.h"
#include "SimpleHealthComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SceneComponent.h"

class UHealthComponentBase;

void AFuelLineSegment::ClientUpdateStartTransform_Implementation(const FVector& NewStartLocation) {
}
bool AFuelLineSegment::ClientUpdateStartTransform_Validate(const FVector& NewStartLocation) {
    return true;
}

void AFuelLineSegment::ChangeStartTransform(const FTransform& ChangedStartLocation) {
}

void AFuelLineSegment::CallbackOnDeath(UHealthComponentBase* InHealthComponent) {
}

void AFuelLineSegment::CallbackCanStartNextSegmentChanged(bool InCanStart) {
}

AFuelLineSegment::AFuelLineSegment() {
    this->FuelLineSplineMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("FuelLineSplineMesh"));
    this->FuelLineSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("FuelLineSplineComponent"));
    this->FuelLineEndPostMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FuelLineEndPostMesh"));
    this->DeconstructHealthComponent = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("DeconstructHealthComponent"));
    this->PreviewEndPostLocation = CreateDefaultSubobject<USceneComponent>(TEXT("PreviewEndPostLocation"));
    this->EndPostHeightOffset = 0.00f;
    this->MaxLength = 500.00f;
    this->bHasMaxTurnAngle = false;
    this->MaxTurnAngle = 0.00f;
}

