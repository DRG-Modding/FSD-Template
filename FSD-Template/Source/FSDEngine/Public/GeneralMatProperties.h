#pragma once
#include "CoreMinimal.h"
#include "EGeneralComb.h"
#include "GeneralMatProperties.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FGeneralMatProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGeneralComb Result;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterialCore* Material;
    
    FSDENGINE_API FGeneralMatProperties();
};

