#pragma once
#include "CoreMinimal.h"
#include "EDealType.h"
#include "DailyDeal.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FDailyDeal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadOnly)
    EDealType DealType;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ResourceAmount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Credits;
    
    UPROPERTY(BlueprintReadOnly)
    float ChangePercent;
    
    FSD_API FDailyDeal();
};

