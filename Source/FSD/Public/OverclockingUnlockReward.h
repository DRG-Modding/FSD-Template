#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UnlockReward.h"
#include "OverclockingUnlockReward.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOverclockingUnlockReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Item;
    
public:
    UOverclockingUnlockReward();
};

