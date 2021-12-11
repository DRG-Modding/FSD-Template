#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TerrainFunctionLibrary.generated.h"

class UObject;
class UTerrainMaterial;

UCLASS(BlueprintType)
class UTerrainFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CreateExplosionCrater2(UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, FVector Normal, float NormalOffset, float NormalSqueeze, bool allowCustomBurntMaterial, bool DissolvePlatforms, UTerrainMaterial* overrideBurnedMaterial);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CreateExplosionCrater(UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, bool allowCustomBurntMaterial, UTerrainMaterial* overrideBurnedMaterial);
    
    UTerrainFunctionLibrary();
};

