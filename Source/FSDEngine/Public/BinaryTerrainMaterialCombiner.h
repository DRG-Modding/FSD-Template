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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyBinaryMatProperties IfEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBinaryMatProperties IfSolid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBinaryMatPatterns> Patterns;
    
    FSDENGINE_API FBinaryTerrainMaterialCombiner();
};

