#pragma once
#include "CoreMinimal.h"
#include "RewardsClaimed.generated.h"

USTRUCT(BlueprintType)
struct FRewardsClaimed {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NormalClaimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpecialClaimed;
    
public:
    FSD_API FRewardsClaimed();
};

