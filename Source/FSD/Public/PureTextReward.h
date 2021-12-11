#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "PureTextReward.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UPureTextReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
public:
    UPureTextReward();
};

