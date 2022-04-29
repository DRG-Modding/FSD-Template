#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UnlockReward.h"
#include "PermanentItemUpgradeReward.generated.h"

class AActor;
class UItemUpgrade;

UCLASS(Blueprintable, EditInlineNew)
class UPermanentItemUpgradeReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemUpgrade* Upgrade;
    
public:
    UPermanentItemUpgradeReward();
};

