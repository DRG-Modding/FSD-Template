#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "RewardMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URewardMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardText;
    
    UPROPERTY(EditAnywhere)
    float XPMultiplier;
    
    UPROPERTY(EditAnywhere)
    float CreditMultiplier;
    
public:
    URewardMutator();
};

