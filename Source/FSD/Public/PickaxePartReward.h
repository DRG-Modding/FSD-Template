#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "PickaxePartReward.generated.h"

class UPickaxePart;

UCLASS(BlueprintType, EditInlineNew)
class UPickaxePartReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPickaxePart* PicaxePart;
    
public:
    UPickaxePartReward();
};

