#pragma once
#include "CoreMinimal.h"
#include "EDealType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DailyDealSetup.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FDailyDealSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDealType DealType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint UnitsRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DiscountRangePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ExtraValueRangePercent;
    
    FSD_API FDailyDealSetup();
};

