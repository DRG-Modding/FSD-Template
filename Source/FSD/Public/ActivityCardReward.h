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
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGameActivityType* activity;
    
public:
    UActivityCardReward();
};

