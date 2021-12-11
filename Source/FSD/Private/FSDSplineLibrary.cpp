#include "FSDSplineLibrary.h"

class UObject;
class USplineComponent;
class AActor;
class USplineMeshComponent;
class UTerrainMaterial;

bool UFSDSplineLibrary::SplineComponentSphereTrace(USplineComponent*& SplineComponent, float Radius, TEnumAsByte<ETraceTypeQuery> TraceType, float StepSize, TArray<AActor*> IgnoreActors, FHitResult& OutHitResult, FVector Offset) {
    return false;
}

TArray<FTransform> UFSDSplineLibrary::GetSplineComponentTransforms(USplineComponent*& SplineComponent, float StepSize, TEnumAsByte<ESplineCoordinateSpace::Type> Space) {
    return TArray<FTransform>();
}

void UFSDSplineLibrary::GetLocationAndTangentsAtSplinePoint(const USplineComponent* Spline, int32 PointIndex, FVector& Location, FVector& ArriveTangent, FVector& LeaveTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) {
}

void UFSDSplineLibrary::ConvertSplineDistanceToInputKey(USplineComponent*& SplineComponent, USplineComponent* OptionalTargetSpline) {
}

bool UFSDSplineLibrary::CarveAroundSplinePoints(UObject* WorldContext, const FVector& InStartLocation, const FVector& InStartTangent, const FVector& InEndLocation, const FVector& InEndTangent, float InRadius, UTerrainMaterial* InTerrainMaterial, ECarveFilterType InCarveFilter, EPreciousMaterialOptions InPrecious) {
    return false;
}

bool UFSDSplineLibrary::CarveAroundSplineMesh(USplineMeshComponent* InMesh, float InRadius, UTerrainMaterial* InTerrainMaterial, ECarveFilterType InCarveFilter, EPreciousMaterialOptions InPrecious) {
    return false;
}

float UFSDSplineLibrary::ApproximateSplineDistanceAtWorldLocation(const USplineComponent* Spline, const FVector& WorldLocation) {
    return 0.0f;
}

UFSDSplineLibrary::UFSDSplineLibrary() {
}

