#pragma once
#include "CoreMinimal.h"
#include "ResourceData.h"
#include "VeinResourceData.generated.h"

class UTerrainMaterial;
class UVeinResourceCreator;

UCLASS()
class UVeinResourceData : public UResourceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* TerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    float UnitsPerLenth;
    
    UPROPERTY(EditAnywhere)
    bool ScaleToResourceDistribution;
    
    UPROPERTY(EditAnywhere, Instanced)
    UVeinResourceCreator* ResourceCreator;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTerrainMaterial* GetTerrainMaterial() const;
    
    UVeinResourceData();
};

