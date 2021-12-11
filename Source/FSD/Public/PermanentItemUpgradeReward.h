#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UnlockReward.h"
#include "PermanentItemUpgradeReward.generated.h"

class AActor;
class UItemUpgrade;

UCLASS(BlueprintType, EditInlineNew)
class UPermanentItemUpgradeReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> Item;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemUpgrade* Upgrade;
    
public:
    UPermanentItemUpgradeReward();
};

