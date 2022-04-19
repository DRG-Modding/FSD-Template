#pragma once
#include "CoreMinimal.h"
#include "SeasonLevel.generated.h"

class UReward;

USTRUCT(BlueprintType)
struct FSeasonLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReward* Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReward* specialReward;
    
    FSD_API FSeasonLevel();
};

