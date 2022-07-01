#pragma once
#include "CoreMinimal.h"
#include "EPattern.h"
#include "BinaryMatProperties.h"
#include "BinaryMatPatterns.generated.h"

class UTerrainMaterialCore;

USTRUCT(BlueprintType)
struct FBinaryMatPatterns {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPattern PatternType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialCore* PatternMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBinaryMatProperties ReplaceWith;
    
    FSDENGINE_API FBinaryMatPatterns();
};

