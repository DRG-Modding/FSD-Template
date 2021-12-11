#pragma once
#include "CoreMinimal.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "CSGLayers.generated.h"

USTRUCT(BlueprintType)
struct FCSGLayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBinaryTerrainMaterialCombiner Above;
    
    FSDENGINE_API FCSGLayers();
};

