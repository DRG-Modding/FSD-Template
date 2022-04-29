#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "ReplaceMaterialUpgradeElement.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class UReplaceMaterialUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TargetMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ReplaceWithMaterial;
    
public:
    UReplaceMaterialUpgradeElement();
};

