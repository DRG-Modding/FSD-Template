#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "PickaxePartReward.generated.h"

class UPickaxePart;

UCLASS(Blueprintable, EditInlineNew)
class UPickaxePartReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPickaxePart* PicaxePart;
    
public:
    UPickaxePartReward();
};

