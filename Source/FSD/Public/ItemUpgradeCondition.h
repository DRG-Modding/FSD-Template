#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemUpgradeCondition.generated.h"

UCLASS(Abstract, EditInlineNew)
class UItemUpgradeCondition : public UObject {
    GENERATED_BODY()
public:
    UItemUpgradeCondition();
};

