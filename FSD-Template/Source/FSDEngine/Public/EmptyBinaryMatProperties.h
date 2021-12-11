#pragma once
#include "CoreMinimal.h"
#include "EEmptyBinaryComb.h"
#include "EmptyBinaryMatProperties.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FEmptyBinaryMatProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEmptyBinaryComb Result;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterialCore* Material;
    
    FSDENGINE_API FEmptyBinaryMatProperties();
};

