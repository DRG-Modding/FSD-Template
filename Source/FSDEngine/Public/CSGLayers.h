#pragma once
#include "CoreMinimal.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "CSGLayers.generated.h"

USTRUCT(BlueprintType)
struct FCSGLayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBinaryTerrainMaterialCombiner Above;
    
    FSDENGINE_API FCSGLayers();
};

