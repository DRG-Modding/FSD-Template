#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TerrainMaterialsCollection.generated.h"

class UTerrainMaterial;
class UTerrainType;

UCLASS(MinimalAPI)
class UTerrainMaterialsCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTerrainMaterial*> Materials;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTerrainType*> TerrainTypes;
    
    UTerrainMaterialsCollection();
};

