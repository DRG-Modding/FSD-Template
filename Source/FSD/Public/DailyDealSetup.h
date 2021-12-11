#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDealType.h"
#include "UObject/NoExportTypes.h"
#include "DailyDealSetup.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FDailyDealSetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    EDealType DealType;
    
    UPROPERTY(EditAnywhere)
    FIntPoint UnitsRange;
    
    UPROPERTY(EditAnywhere)
    FVector2D DiscountRangePercent;
    
    UPROPERTY(EditAnywhere)
    FVector2D ExtraValueRangePercent;
    
    FSD_API FDailyDealSetup();
};

