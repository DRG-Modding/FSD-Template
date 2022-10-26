#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "SeasonXPReward.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USeasonXPReward : public UReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
public:
    USeasonXPReward();
};

