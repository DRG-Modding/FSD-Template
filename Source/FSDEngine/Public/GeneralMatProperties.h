#pragma once
#include "CoreMinimal.h"
#include "EGeneralComb.h"
#include "GeneralMatProperties.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FGeneralMatProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeneralComb Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialCore* Material;
    
    FSDENGINE_API FGeneralMatProperties();
};

