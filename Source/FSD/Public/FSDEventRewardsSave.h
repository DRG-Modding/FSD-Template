#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FSDEventRewardsSave.generated.h"

USTRUCT(BlueprintType)
struct FFSDEventRewardsSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> EventsSeen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> PopupsSeen;
    
public:
    FSD_API FFSDEventRewardsSave();
};

