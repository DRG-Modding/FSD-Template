#pragma once
#include "CoreMinimal.h"
#include "ResourceData.h"
#include "VeinResourceData.generated.h"

class UTerrainMaterial;
class UVeinResourceCreator;

UCLASS(Blueprintable)
class UVeinResourceData : public UResourceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* TerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitsPerLenth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScaleToResourceDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVeinResourceCreator* ResourceCreator;
    
public:
    UVeinResourceData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTerrainMaterial* GetTerrainMaterial() const;
    
};

