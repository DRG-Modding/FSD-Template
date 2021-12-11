#pragma once
#include "CoreMinimal.h"
#include "EGeneralCombEmpty.h"
#include "GeneralMatPropertiesEmpty.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FGeneralMatPropertiesEmpty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGeneralCombEmpty Result;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterialCore* Material;
    
    FSDENGINE_API FGeneralMatPropertiesEmpty();
};

