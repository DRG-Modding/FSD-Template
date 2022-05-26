#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FSDMath.generated.h"

UCLASS(Blueprintable)
class UFSDMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDMath();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SphericalToCartesian(float Radius, float azimuth, float elecation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PercentageCheck(float percentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAzimuthAndElevation(const FVector& Direction, const FTransform& coordinateSystem, float& azimuth, float& elevation);
    
    UFUNCTION(BlueprintCallable)
    static float CubicSegmentLength(FVector p0, FVector tangent1, FVector p1, FVector tangent2);
    
    UFUNCTION(BlueprintCallable)
    static FVector CubicInterpBlueprint(FVector p0, FVector tangent1, FVector p1, FVector tangent2, float alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CartesianToSpherical(FVector Location, float& outAzimuth, float& outElevation, float& outRadius);
    
};

