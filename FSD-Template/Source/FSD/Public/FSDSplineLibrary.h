#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Components/SplineComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECarveFilterType.h"
#include "EPreciousMaterialOptions.h"
#include "FSDSplineLibrary.generated.h"

class USplineComponent;
class AActor;
class UObject;
class USplineMeshComponent;
class UTerrainMaterial;

UCLASS(BlueprintType)
class UFSDSplineLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool SplineComponentSphereTrace(USplineComponent*& SplineComponent, float Radius, TEnumAsByte<ETraceTypeQuery> TraceType, float StepSize, TArray<AActor*> IgnoreActors, FHitResult& OutHitResult, FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FTransform> GetSplineComponentTransforms(USplineComponent*& SplineComponent, float StepSize, TEnumAsByte<ESplineCoordinateSpace::Type> Space);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetLocationAndTangentsAtSplinePoint(const USplineComponent* Spline, int32 PointIndex, FVector& Location, FVector& ArriveTangent, FVector& LeaveTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertSplineDistanceToInputKey(UPARAM(Ref) USplineComponent*& SplineComponent, USplineComponent* OptionalTargetSpline);
    
    UFUNCTION(BlueprintCallable)
    static bool CarveAroundSplinePoints(UObject* WorldContext, const FVector& InStartLocation, const FVector& InStartTangent, const FVector& InEndLocation, const FVector& InEndTangent, float InRadius, UTerrainMaterial* InTerrainMaterial, ECarveFilterType InCarveFilter, EPreciousMaterialOptions InPrecious);
    
    UFUNCTION(BlueprintCallable)
    static bool CarveAroundSplineMesh(USplineMeshComponent* InMesh, float InRadius, UTerrainMaterial* InTerrainMaterial, ECarveFilterType InCarveFilter, EPreciousMaterialOptions InPrecious);
    
    UFUNCTION(BlueprintCallable)
    static float ApproximateSplineDistanceAtWorldLocation(const USplineComponent* Spline, const FVector& WorldLocation);
    
    UFSDSplineLibrary();
};

