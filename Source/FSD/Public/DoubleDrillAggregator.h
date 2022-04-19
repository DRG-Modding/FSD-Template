#pragma once
#include "CoreMinimal.h"
#include "CapacityBasedItemAggregator.h"
#include "DoubleDrillAggregator.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDoubleDrillAggregator : public UCapacityBasedItemAggregator {
    GENERATED_BODY()
public:
    UDoubleDrillAggregator();
};

