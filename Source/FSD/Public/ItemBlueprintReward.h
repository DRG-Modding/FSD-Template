#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "ItemBlueprintReward.generated.h"

class UItemID;

UCLASS(Blueprintable, EditInlineNew)
class UItemBlueprintReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;
    
public:
    UItemBlueprintReward();
};

