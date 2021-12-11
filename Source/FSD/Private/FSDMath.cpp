#include "FSDMath.h"

FVector UFSDMath::SphericalToCartesian(float Radius, float azimuth, float elecation) {
    return FVector{};
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

void UFSDMath::CartesianToSpherical(FVector Location, float& outAzimuth, float& outElevation, float& outRadius) {
}

UFSDMath::UFSDMath() {
}

