#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "ActivityCardReward.generated.h"

class UGameActivityType;

UCLASS(BlueprintType, EditInlineNew)
class UActivityCardReward : public UReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameActivityType* Activity;
    
public:
    UActivityCardReward();
};

