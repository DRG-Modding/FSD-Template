#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "SeasonTokenReward.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class USeasonTokenReward : public UReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Amount;
    
public:
    USeasonTokenReward();
};

