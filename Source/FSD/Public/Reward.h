#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Reward.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UReward : public UDataAsset {
    GENERATED_BODY()
public:
    UReward();
};

