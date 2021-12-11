#pragma once
#include "CoreMinimal.h"
#include "SmartTerrainMaterialVal.generated.h"

USTRUCT(BlueprintType)
struct FSmartTerrainMaterialVal {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 IfEmpty;
    
    UPROPERTY()
    uint32 IfSolid;
    
    UPROPERTY()
    TArray<uint32> OverrideKeys;
    
    UPROPERTY()
    TArray<uint32> OverrideValues;
    
    FSDENGINE_API FSmartTerrainMaterialVal();
};

