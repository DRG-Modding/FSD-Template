#pragma once
#include "CoreMinimal.h"
#include "SmartTerrainMaterialVal.generated.h"

USTRUCT(BlueprintType)
struct FSmartTerrainMaterialVal {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    uint32 IfEmpty;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    uint32 IfSolid;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    TArray<uint32> OverrideKeys;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    TArray<uint32> OverrideValues;
    
    FSDENGINE_API FSmartTerrainMaterialVal();
};

