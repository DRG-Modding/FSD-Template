#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "TracerUpgradeElement.generated.h"

class UFXSystemAsset;

UCLASS(EditInlineNew)
class UTracerUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* Tracer;
    
public:
    UTracerUpgradeElement();
};

