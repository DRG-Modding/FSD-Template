#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeepDiveSaveRewardItem.generated.h"

USTRUCT(BlueprintType)
struct FDeepDiveSaveRewardItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid RewardID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Stage;
    
    FSD_API FDeepDiveSaveRewardItem();
};

