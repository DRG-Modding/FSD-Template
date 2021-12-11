#pragma once
#include "CoreMinimal.h"
#include "Reward.h"
#include "ResourceReward.generated.h"

class UResourceData;

UCLASS(BlueprintType, EditInlineNew)
class UResourceReward : public UReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Amount;
    
public:
    UResourceReward();
};

