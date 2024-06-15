#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FSDMath.generated.h"

class AActor;

UCLASS(Blueprintable)
class UFSDMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDMath();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SphericalToCartesian(float Radius, float azimuth, float elecation);
    
    UFUNCTION(BlueprintCallable)
    static float SignedAngleBetweenVectorsZUp(const FVector& v1, const FVector& v2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RoundToDecimalPlace(float Number, int32 decimalPlaces);
    
    UFUNCTION(BlueprintCallable)
    static void RotateActorAroundOffset(AActor* Actor, FVector localSpaceOffset, FRotator Rotator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PercentageCheck(float percentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAzimuthAndElevation(const FVector& Direction, const FTransform& coordinateSystem, float& azimuth, float& elevation);
    
    UFUNCTION(BlueprintCallable)
    static float CubicSegmentLength(FVector p0, FVector tangent1, FVector p1, FVector tangent2);
    
    UFUNCTION(BlueprintCallable)
    static FVector CubicInterpBlueprint(FVector p0, FVector tangent1, FVector p1, FVector tangent2, float alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClampVectorToCone(FVector ToConstrain, FVector ConeDirection, float ConeAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CartesianToSpherical(FVector Location, float& outAzimuth, float& outElevation, float& OutRadius);
    
    UFUNCTION(BlueprintCallable)
    static float AngleBetweenVectors(const FVector& v1, const FVector& v2);
    
};

