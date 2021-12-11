#pragma once
#include "CoreMinimal.h"
#include "RetirementCostItem.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FRetirementCostItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UResourceData*, int32> RetirementCost;
    
    FSD_API FRetirementCostItem();
};

