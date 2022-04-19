#pragma once
#include "CoreMinimal.h"
#include "EGeneralCombEmpty.h"
#include "GeneralMatPropertiesEmpty.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FGeneralMatPropertiesEmpty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeneralCombEmpty Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialCore* Material;
    
    FSDENGINE_API FGeneralMatPropertiesEmpty();
};

