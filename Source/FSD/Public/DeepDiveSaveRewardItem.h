#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeepDiveSaveRewardItem.generated.h"

USTRUCT(BlueprintType)
struct FDeepDiveSaveRewardItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid RewardID;
    
    UPROPERTY()
    int32 Stage;
    
    FSD_API FDeepDiveSaveRewardItem();
};

