#pragma once
#include "CoreMinimal.h"
#include "RewardsClaimed.generated.h"

USTRUCT(BlueprintType)
struct FRewardsClaimed {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool NormalClaimed;
    
    UPROPERTY()
    bool SpecialClaimed;
    
public:
    FSD_API FRewardsClaimed();
};

