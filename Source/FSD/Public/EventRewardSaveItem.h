#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventRewardSaveItem.generated.h"

USTRUCT(BlueprintType)
struct FEventRewardSaveItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid CategoryID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FGuid> ClassOptions;
    
    FSD_API FEventRewardSaveItem();
};

