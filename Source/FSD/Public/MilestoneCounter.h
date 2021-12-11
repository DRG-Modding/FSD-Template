#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MilestoneCounter.generated.h"

USTRUCT(BlueprintType)
struct FMilestoneCounter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid KPIGuid;
    
    UPROPERTY()
    int32 Tier;
    
    FSD_API FMilestoneCounter();
};

