#pragma once
#include "CoreMinimal.h"
#include "CommunityReward.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FCommunityReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSD_API FCommunityReward();
};

