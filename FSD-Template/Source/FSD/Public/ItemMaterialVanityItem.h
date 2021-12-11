#pragma once
#include "CoreMinimal.h"
#include "VanityItem.h"
#include "ItemMaterialVanityItem.generated.h"

class UMaterialInterface;

UCLASS(Abstract, EditInlineNew)
class UItemMaterialVanityItem : public UVanityItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    UItemMaterialVanityItem();
};

