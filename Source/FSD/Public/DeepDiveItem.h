#pragma once
#include "CoreMinimal.h"
#include "DeepDiveSaveRewardItem.h"
#include "UObject/NoExportTypes.h"
#include "DeepDiveItem.generated.h"

USTRUCT(BlueprintType)
struct FDeepDiveItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Progress;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 BestTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FDeepDiveSaveRewardItem> Rewards;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool HasEverCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FGuid> RewardsGiven;
    
public:
    FSD_API FDeepDiveItem();
};

