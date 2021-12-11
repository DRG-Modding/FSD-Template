#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeCondition.h"
#include "UObject/NoExportTypes.h"
#include "PlayerShieldsItemUpgradeCondition.generated.h"

UCLASS(EditInlineNew)
class UPlayerShieldsItemUpgradeCondition : public UItemUpgradeCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval ShieldPercentageRequired;
    
public:
    UPlayerShieldsItemUpgradeCondition();
};

