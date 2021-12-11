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
    UPROPERTY(EditAnywhere)
    EGeneralPattern PatternType;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterialCore* PatternMaterial;
    
    UPROPERTY(EditAnywhere)
    FGeneralMatProperties ReplaceWith;
    
    FSDENGINE_API FGeneralMatPatterns();
};

