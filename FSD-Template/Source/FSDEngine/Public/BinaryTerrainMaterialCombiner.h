#pragma once
#include "CoreMinimal.h"
#include "EmptyBinaryMatProperties.h"
#include "BinaryMatProperties.h"
#include "BinaryMatPatterns.h"
#include "BinaryTerrainMaterialCombiner.generated.h"

USTRUCT(BlueprintType)
struct FBinaryTerrainMaterialCombiner {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEmptyBinaryMatProperties IfEmpty;
    
    UPROPERTY(EditAnywhere)
    FBinaryMatProperties IfSolid;
    
    UPROPERTY(EditAnywhere)
    TArray<FBinaryMatPatterns> Patterns;
    
    FSDENGINE_API FBinaryTerrainMaterialCombiner();
};

