#pragma once
#include "CoreMinimal.h"
#include "CommunityReward.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FCommunityReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Value;
    
    FSD_API FCommunityReward();
};

