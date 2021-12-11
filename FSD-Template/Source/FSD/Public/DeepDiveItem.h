#pragma once
#include "CoreMinimal.h"
#include "DeepDiveSaveRewardItem.h"
#include "UObject/NoExportTypes.h"
#include "DeepDiveItem.generated.h"

USTRUCT(BlueprintType)
struct FDeepDiveItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Progress;
    
    UPROPERTY()
    int32 Seed;
    
    UPROPERTY()
    int32 BestTime;
    
    UPROPERTY()
    TArray<FDeepDiveSaveRewardItem> Rewards;
    
    UPROPERTY()
    bool HasEverCompleted;
    
private:
    UPROPERTY()
    TArray<FGuid> RewardsGiven;
    
public:
    FSD_API FDeepDiveItem();
};

