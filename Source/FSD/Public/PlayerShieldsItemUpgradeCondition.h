#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemUpgradeCondition.h"
#include "PlayerShieldsItemUpgradeCondition.generated.h"

UCLASS(EditInlineNew)
class UPlayerShieldsItemUpgradeCondition : public UItemUpgradeCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ShieldPercentageRequired;
    
public:
    UPlayerShieldsItemUpgradeCondition();
};

