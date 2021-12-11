#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "RewardMutator.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class URewardMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText RewardText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float XPMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CreditMultiplier;
    
public:
    URewardMutator();
};

