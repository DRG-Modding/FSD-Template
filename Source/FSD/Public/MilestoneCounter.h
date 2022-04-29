#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MilestoneCounter.generated.h"

USTRUCT(BlueprintType)
struct FMilestoneCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid KPIGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tier;
    
    FSD_API FMilestoneCounter();
};

