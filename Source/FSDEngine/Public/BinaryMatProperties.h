#pragma once
#include "CoreMinimal.h"
#include "EBinaryComb.h"
#include "BinaryMatProperties.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FBinaryMatProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBinaryComb Result;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterialCore* Material;
    
    FSDENGINE_API FBinaryMatProperties();
};

