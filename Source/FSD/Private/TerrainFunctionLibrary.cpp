#include "TerrainFunctionLibrary.h"

bool UTerrainFunctionLibrary::GetDebrisTransformsInSphere(UObject* WorldContextObject, TArray<FMatrix>& outPositions, const FVector& Location, const float& Radius, const ESpecialDebrisType& debrisType, float minDistToOther, bool calcPriority) {
    return false;
}

TArray<FVector> UTerrainFunctionLibrary::GetAllNavPointsInSphere(UObject* WorldContextObject, FVector Origin, float Radius, DeepPathFinderSize pfSize, const FVector searchNormal, float maxDegreesToSearchNormal) {
    return TArray<FVector>();
}

TArray<FVector> UTerrainFunctionLibrary::FindPath(UObject* WorldContextObject, FVector Origin, FVector Destination, DeepPathFinderSize pfSize) {
    return TArray<FVector>();
}

void UTerrainFunctionLibrary::CreateExplosionCrater2(UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, FVector Normal, float NormalOffset, float NormalSqueeze, bool allowCustomBurntMaterial, bool DissolvePlatforms, UTerrainMaterial* overrideBurnedMaterial) {
}

void UTerrainFunctionLibrary::CreateExplosionCrater(UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, bool allowCustomBurntMaterial, UTerrainMaterial* overrideBurnedMaterial) {
}

int32 UTerrainFunctionLibrary::CountDebrisOfType(UObject* WorldContextObject, ESpecialDebrisType debrisType) {
    return 0;
}

int32 UTerrainFunctionLibrary::CountDebrisInSphere(UObject* WorldContextObject, FVector Location, float Radius, ESpecialDebrisType debrisType) {
    return 0;
}

UTerrainFunctionLibrary::UTerrainFunctionLibrary() {
}

