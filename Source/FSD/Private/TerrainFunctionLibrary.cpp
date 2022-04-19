#include "TerrainFunctionLibrary.h"

class UObject;
class UTerrainMaterial;

void UTerrainFunctionLibrary::CreateExplosionCrater2(UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, FVector Normal, float NormalOffset, float NormalSqueeze, bool allowCustomBurntMaterial, bool DissolvePlatforms, UTerrainMaterial* overrideBurnedMaterial) {
}

void UTerrainFunctionLibrary::CreateExplosionCrater(UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, bool allowCustomBurntMaterial, UTerrainMaterial* overrideBurnedMaterial) {
}

UTerrainFunctionLibrary::UTerrainFunctionLibrary() {
}

