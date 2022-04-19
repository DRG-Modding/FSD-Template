#pragma once
#include "CoreMinimal.h"
#include "UnassignedReward.generated.h"

class UReward;

USTRUCT(BlueprintType)
struct FUnassignedReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReward* Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FSD_API FUnassignedReward();
};

