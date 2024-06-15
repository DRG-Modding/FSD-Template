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
    TSoftObjectPtr<UMaterialInterface> TargetMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> ReplaceWithMaterial;
    
public:
    UReplaceMaterialUpgradeElement();

};

