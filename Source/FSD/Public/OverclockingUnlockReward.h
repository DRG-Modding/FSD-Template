#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UnlockReward.h"
#include "OverclockingUnlockReward.generated.h"

class AActor;

UCLASS(EditInlineNew)
class UOverclockingUnlockReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> Item;
    
public:
    UOverclockingUnlockReward();
};

