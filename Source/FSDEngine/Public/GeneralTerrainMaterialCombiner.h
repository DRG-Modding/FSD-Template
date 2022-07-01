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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneralMatPropertiesEmpty IfBothEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneralMatPatterns> Patterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneralMatProperties IfBothSolid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneralMatProperties IfSrcSolid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneralMatProperties IfDestSolid;
    
    FSDENGINE_API FGeneralTerrainMaterialCombiner();
};

