#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MeshLayerProperties.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FMeshLayerProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTerrainMaterialCore* StartMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBox BoundingBox;
    
    FSDENGINE_API FMeshLayerProperties();
};

