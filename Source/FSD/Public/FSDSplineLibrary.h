#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "Blueprint/UserWidget.h"
#include "Curve2DAppearance.h"
#include "UObject/NoExportTypes.h"
#include "EPreciousMaterialOptions.h"
#include "ECarveFilterType.h"
#include "FSDSplineLibrary.generated.h"

class USplineComponent;
class AActor;
class UObject;
class UTerrainMaterial;
class USplineMeshComponent;

UCLASS(Blueprintable)
class UFSDSplineLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDSplineLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SplineComponentSphereTrace(USplineComponent*& SplineComponent, float Radius, TEnumAsByte<ETraceTypeQuery> TraceType, float StepSize, TArray<AActor*> IgnoreActors, FHitResult& OutHitResult, FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    static void SetStartAndEndTangentsCurve2D(UPARAM(Ref) FInterpCurveVector2D& Curve, FVector2D StartTangent, FVector2D EndTangent);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FTransform> GetSplineComponentTransforms(USplineComponent*& SplineComponent, float StepSize, TEnumAsByte<ESplineCoordinateSpace::Type> Space);
    
    UFUNCTION(BlueprintPure)
    static void GetLocationAndTangentsAtSplinePoint(const USplineComponent* Spline, int32 PointIndex, FVector& Location, FVector& ArriveTangent, FVector& LeaveTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void EvalCurveScaled2D(const FInterpCurveVector2D& Curve, float Key, FVector2D ScaleBy, FVector2D& OutPosition, FVector2D& OutTangent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void EvalCurve2D(const FInterpCurveVector2D& Curve, float Key, FVector2D& OutPosition, FVector2D& OutTangent);
    
    UFUNCTION(BlueprintCallable)
    static void DrawCurveScaled2D(UPARAM(Ref) FPaintContext& Context, const FInterpCurveVector2D& Curve, FVector2D ScaleBy, FCurve2DAppearance Appearance, float Opacity);
    
    UFUNCTION(BlueprintCallable)
    static void DrawCurve2D(UPARAM(Ref) FPaintContext& Context, const FInterpCurveVector2D& Curve, FCurve2DAppearance Appearance, float Opacity);
    
    UFUNCTION(BlueprintCallable)
    static void DrawBezierScaled2D(UPARAM(Ref) FPaintContext& Context, FVector2D InStartPos, FVector2D InStartTangent, FVector2D InEndPos, FVector2D InEndTangent, FCurve2DAppearance InAppearance, FVector2D ScaleBy, float Opacity, bool InClampTangents);
    
    UFUNCTION(BlueprintCallable)
    static void DrawBezier2D(UPARAM(Ref) FPaintContext& Context, FVector2D InStartPos, FVector2D InStartTangent, FVector2D InEndPos, FVector2D InEndTangent, FCurve2DAppearance InAppearance, float Opacity, bool InClampTangents);
    
    UFUNCTION(BlueprintPure)
    static FInterpCurveVector2D CreateCurveWithTangents2D(const TArray<FVector2D>& Positions, FVector2D StartTangent, FVector2D EndTangent, TEnumAsByte<EInterpCurveMode> Mode);
    
    UFUNCTION(BlueprintPure)
    static FInterpCurveVector2D CreateCurve2D(const TArray<FVector2D>& Positions, TEnumAsByte<EInterpCurveMode> Mode);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertSplineDistanceToInputKey(UPARAM(Ref) USplineComponent*& SplineComponent, USplineComponent* OptionalTargetSpline);
    
    UFUNCTION(BlueprintCallable)
    static bool CarveAroundSplinePoints(UObject* WorldContext, const FVector& InStartLocation, const FVector& InStartTangent, const FVector& InEndLocation, const FVector& InEndTangent, float InRadius, UTerrainMaterial* InTerrainMaterial, ECarveFilterType InCarveFilter, EPreciousMaterialOptions InPrecious);
    
    UFUNCTION(BlueprintCallable)
    static bool CarveAroundSplineMesh(USplineMeshComponent* InMesh, float InRadius, UTerrainMaterial* InTerrainMaterial, ECarveFilterType InCarveFilter, EPreciousMaterialOptions InPrecious);
    
    UFUNCTION(BlueprintCallable)
    static float ApproximateSplineDistanceAtWorldLocation(const USplineComponent* Spline, const FVector& WorldLocation);
    
};

