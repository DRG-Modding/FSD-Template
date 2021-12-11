#pragma once
#include "CoreMinimal.h"
#include "GeneralMatPatterns.h"
#include "GeneralMatPropertiesEmpty.h"
#include "GeneralMatProperties.h"
#include "GeneralTerrainMaterialCombiner.generated.h"

USTRUCT(BlueprintType)
struct FGeneralTerrainMaterialCombiner {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGeneralMatPropertiesEmpty IfBothEmpty;
    
    UPROPERTY(EditAnywhere)
    TArray<FGeneralMatPatterns> Patterns;
    
    UPROPERTY(EditAnywhere)
    FGeneralMatProperties IfBothSolid;
    
    UPROPERTY(EditAnywhere)
    FGeneralMatProperties IfSrcSolid;
    
    UPROPERTY(EditAnywhere)
    FGeneralMatProperties IfDestSolid;
    
    FSDENGINE_API FGeneralTerrainMaterialCombiner();
};

