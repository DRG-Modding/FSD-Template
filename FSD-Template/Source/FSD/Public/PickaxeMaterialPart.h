#pragma once
#include "CoreMinimal.h"
#include "PickaxePartItem.h"
#include "PickaxeMaterialPart.generated.h"

class UMaterialInterface;

UCLASS(BlueprintType, EditInlineNew)
class UPickaxeMaterialPart : public UPickaxePartItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> IconMaterial;
    
public:
    UPickaxeMaterialPart();
};

