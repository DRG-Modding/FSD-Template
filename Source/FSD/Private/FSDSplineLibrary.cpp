#include "FSDSplineLibrary.h"

class USplineComponent;
class AActor;
class UObject;
class UTerrainMaterial;
class USplineMeshComponent;

bool UFSDSplineLibrary::SplineComponentSphereTrace(USplineComponent*& SplineComponent, float Radius, TEnumAsByte<ETraceTypeQuery> TraceType, float StepSize, TArray<AActor*> IgnoreActors, FHitResult& OutHitResult, FVector Offset) {
    return false;
}

void UFSDSplineLibrary::SetStartAndEndTangentsCurve2D(FInterpCurveVector2D& Curve, FVector2D StartTangent, FVector2D EndTangent) {
}

TArray<FTransform> UFSDSplineLibrary::GetSplineComponentTransforms(USplineComponent*& SplineComponent, float StepSize, TEnumAsByte<ESplineCoordinateSpace::Type> Space) {
    return TArray<FTransform>();
}

void UFSDSplineLibrary::GetLocationAndTangentsAtSplinePoint(const USplineComponent* Spline, int32 PointIndex, FVector& Location, FVector& ArriveTangent, FVector& LeaveTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) {
}

void UFSDSplineLibrary::EvalCurveScaled2D(const FInterpCurveVector2D& Curve, float Key, FVector2D ScaleBy, FVector2D& OutPosition, FVector2D& OutTangent) {
}

void UFSDSplineLibrary::EvalCurve2D(const FInterpCurveVector2D& Curve, float Key, FVector2D& OutPosition, FVector2D& OutTangent) {
}

void UFSDSplineLibrary::DrawCurveScaled2D(FPaintContext& Context, const FInterpCurveVector2D& Curve, FVector2D ScaleBy, FCurve2DAppearance Appearance, float Opacity) {
}

void UFSDSplineLibrary::DrawCurve2D(FPaintContext& Context, const FInterpCurveVector2D& Curve, FCurve2DAppearance Appearance, float Opacity) {
}

void UFSDSplineLibrary::DrawBezierScaled2D(FPaintContext& Context, FVector2D InStartPos, FVector2D InStartTangent, FVector2D InEndPos, FVector2D InEndTangent, FCurve2DAppearance InAppearance, FVector2D ScaleBy, float Opacity, bool InClampTangents) {
}

void UFSDSplineLibrary::DrawBezier2D(FPaintContext& Context, FVector2D InStartPos, FVector2D InStartTangent, FVector2D InEndPos, FVector2D InEndTangent, FCurve2DAppearance InAppearance, float Opacity, bool InClampTangents) {
}

FInterpCurveVector2D UFSDSplineLibrary::CreateCurveWithTangents2D(const TArray<FVector2D>& Positions, FVector2D StartTangent, FVector2D EndTangent, TEnumAsByte<EInterpCurveMode> Mode) {
    return FInterpCurveVector2D{};
}

FInterpCurveVector2D UFSDSplineLibrary::CreateCurve2D(const TArray<FVector2D>& Positions, TEnumAsByte<EInterpCurveMode> Mode) {
    return FInterpCurveVector2D{};
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

