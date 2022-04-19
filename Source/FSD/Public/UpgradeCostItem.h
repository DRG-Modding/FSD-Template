#pragma once
#include "CoreMinimal.h"
#include "UpgradeCostItem.generated.h"

USTRUCT(BlueprintType)
struct FUpgradeCostItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Amounts;
    
    FSD_API FUpgradeCostItem();
};

