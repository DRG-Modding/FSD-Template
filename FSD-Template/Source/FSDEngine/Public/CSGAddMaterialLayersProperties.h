#pragma once
#include "CoreMinimal.h"
#include "CSGLayers.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "CSGAddMaterialLayersProperties.generated.h"

USTRUCT(BlueprintType)
struct FCSGAddMaterialLayersProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCSGLayers> Layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBinaryTerrainMaterialCombiner Inner;
    
    FSDENGINE_API FCSGAddMaterialLayersProperties();
};

