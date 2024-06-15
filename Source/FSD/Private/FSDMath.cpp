#include "FSDMath.h"

UFSDMath::UFSDMath() {
}

FVector UFSDMath::SphericalToCartesian(float Radius, float azimuth, float elecation) {
    return FVector{};
}

float UFSDMath::SignedAngleBetweenVectorsZUp(const FVector& v1, const FVector& v2) {
    return 0.0f;
}

float UFSDMath::RoundToDecimalPlace(float Number, int32 decimalPlaces) {
    return 0.0f;
}

void UFSDMath::RotateActorAroundOffset(AActor* Actor, FVector localSpaceOffset, FRotator Rotator) {
}

bool UFSDMath::PercentageCheck(float percentage) {
    return false;
}

void UFSDMath::GetAzimuthAndElevation(const FVector& Direction, const FTransform& coordinateSystem, float& azimuth, float& elevation) {
}

float UFSDMath::CubicSegmentLength(FVector p0, FVector tangent1, FVector p1, FVector tangent2) {
    return 0.0f;
}

FVector UFSDMath::CubicInterpBlueprint(FVector p0, FVector tangent1, FVector p1, FVector tangent2, float alpha) {
    return FVector{};
}

FVector UFSDMath::ClampVectorToCone(FVector ToConstrain, FVector ConeDirection, float ConeAngle) {
    return FVector{};
}

void UFSDMath::CartesianToSpherical(FVector Location, float& outAzimuth, float& outElevation, float& OutRadius) {
}

float UFSDMath::AngleBetweenVectors(const FVector& v1, const FVector& v2) {
    return 0.0f;
}


