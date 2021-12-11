#pragma once
#include "CoreMinimal.h"
#include "CraftingCost.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FSD_API FCraftingCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Amount;
    
    FCraftingCost();
};

