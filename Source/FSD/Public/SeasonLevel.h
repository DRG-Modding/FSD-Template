#pragma once
#include "CoreMinimal.h"
#include "SeasonLevel.generated.h"

class UReward;

USTRUCT(BlueprintType)
struct FSeasonLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UReward* Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UReward* specialReward;
    
    FSD_API FSeasonLevel();
};

