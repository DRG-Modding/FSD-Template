#pragma once
#include "CoreMinimal.h"
#include "WeeklyCampaignItem.generated.h"

USTRUCT(BlueprintType)
struct FWeeklyCampaignItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 LastCompletedWeek;
    
    UPROPERTY()
    int32 LastStartedWeek;
    
    UPROPERTY()
    int32 RewardedProgress;
    
    FSD_API FWeeklyCampaignItem();
};

