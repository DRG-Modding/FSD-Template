#pragma once
#include "CoreMinimal.h"
#include "EventRewardSaveItem.h"
#include "UObject/NoExportTypes.h"
#include "EventRewardSave.generated.h"

USTRUCT(BlueprintType)
struct FEventRewardSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FEventRewardSaveItem> PendingRewards;
    
    FSD_API FEventRewardSave();
};

