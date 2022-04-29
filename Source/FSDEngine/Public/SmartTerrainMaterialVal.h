#pragma once
#include "CoreMinimal.h"
#include "SmartTerrainMaterialVal.generated.h"

USTRUCT(BlueprintType)
struct FSmartTerrainMaterialVal {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 IfEmpty;
    
    UPROPERTY(EditAnywhere)
    uint32 IfSolid;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> OverrideKeys;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> OverrideValues;
    
    FSDENGINE_API FSmartTerrainMaterialVal();
};

