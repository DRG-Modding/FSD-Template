#pragma once
#include "CoreMinimal.h"
#include "BinaryMatProperties.h"
#include "EPattern.h"
#include "BinaryMatPatterns.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FBinaryMatPatterns {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPattern PatternType;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterialCore* PatternMaterial;
    
    UPROPERTY(EditAnywhere)
    FBinaryMatProperties ReplaceWith;
    
    FSDENGINE_API FBinaryMatPatterns();
};

