#pragma once
#include "CoreMinimal.h"
#include "UnassignedReward.generated.h"

class UReward;

USTRUCT(BlueprintType)
struct FUnassignedReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UReward* Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Index;
    
    FSD_API FUnassignedReward();
};

