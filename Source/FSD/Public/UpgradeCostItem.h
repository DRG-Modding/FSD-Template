#pragma once
#include "CoreMinimal.h"
#include "UpgradeCostItem.generated.h"

USTRUCT(BlueprintType)
struct FUpgradeCostItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<int32> Amounts;
    
    FSD_API FUpgradeCostItem();
};

