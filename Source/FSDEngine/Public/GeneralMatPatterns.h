#pragma once
#include "CoreMinimal.h"
#include "EGeneralPattern.h"
#include "GeneralMatProperties.h"
#include "GeneralMatPatterns.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FGeneralMatPatterns {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeneralPattern PatternType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialCore* PatternMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneralMatProperties ReplaceWith;
    
    FSDENGINE_API FGeneralMatPatterns();
};

