#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PromotionRewardsSave.generated.h"

USTRUCT(BlueprintType)
struct FPromotionRewardsSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSet<FGuid> ClaimedRewards;
    
public:
    FSD_API FPromotionRewardsSave();
};

