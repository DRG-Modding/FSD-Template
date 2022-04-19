#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "RepairableUsable.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class URepairableUsable : public UInstantUsable {
    GENERATED_BODY()
public:
    URepairableUsable();
};

