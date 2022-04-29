#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "SeasonTokenReward.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USeasonTokenReward : public UReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
public:
    USeasonTokenReward();
};

