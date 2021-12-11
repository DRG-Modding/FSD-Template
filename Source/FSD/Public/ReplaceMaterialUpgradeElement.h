#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "ReplaceMaterialUpgradeElement.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
class UReplaceMaterialUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* TargetMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* ReplaceWithMaterial;
    
public:
    UReplaceMaterialUpgradeElement();
};

