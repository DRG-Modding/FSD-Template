#include "PathfinderFunctionLibrary.h"

class UObject;

FVector UPathfinderFunctionLibrary::SnapToGrid(UObject* WorldContextObject, const FVector& Origin, DeepPathFinderType PathType, DeepPathFinderSize PathSize, float maxSnapDistance) {
    return FVector{};
}

bool UPathfinderFunctionLibrary::IsPathfinderReady(UObject* WorldContextObject) {
    return false;
}

FVector UPathfinderFunctionLibrary::FindRandomPositionOnNavmeshAtDistance(UObject* WorldContextObject, const FVector& Origin, float atDistance) {
    return FVector{};
}

FVector UPathfinderFunctionLibrary::FindRandomNearbyPositionOnNavmesh(UObject* WorldContextObject, const FVector& Origin, float Radius) {
    return FVector{};
}

FVector UPathfinderFunctionLibrary::FindPointAlongPathTo(UObject* WorldContextObject, const FVector& Origin, const FVector& Destination, float atDistance) {
    return FVector{};
}

UPathfinderFunctionLibrary::UPathfinderFunctionLibrary() {
}

