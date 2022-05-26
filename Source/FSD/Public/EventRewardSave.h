#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventRewardSaveItem.h"
#include "EventRewardSave.generated.h"

USTRUCT(BlueprintType)
struct FEventRewardSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FEventRewardSaveItem> PendingRewards;
    
    FSD_API FEventRewardSave();
};

