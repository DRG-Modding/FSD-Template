#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IRandRange.h"
#include "PricingTierEntry.generated.h"

USTRUCT(BlueprintType)
struct FPricingTierEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange CreditCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange Material1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange Material2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange Material3;
    
    FSD_API FPricingTierEntry();
};

