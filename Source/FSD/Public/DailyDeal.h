#pragma once
#include "CoreMinimal.h"
#include "EDealType.h"
#include "DailyDeal.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FDailyDeal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EDealType DealType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ResourceAmount;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Credits;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ChangePercent;
    
    FSD_API FDailyDeal();
};

