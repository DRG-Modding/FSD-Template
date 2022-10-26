#pragma once
#include "CoreMinimal.h"
#include "DecalData.h"
#include "TestTerrainMaterialDecalItem.generated.h"

class UTerrainMaterial;

USTRUCT(BlueprintType)
struct FTestTerrainMaterialDecalItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTerrainMaterial*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDecalData> Decals;
    
    FSD_API FTestTerrainMaterialDecalItem();
};

