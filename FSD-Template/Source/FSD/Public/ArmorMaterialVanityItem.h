#pragma once
#include "CoreMinimal.h"
#include "VanityItem.h"
#include "ArmorMaterialVanityItem.generated.h"

class UMaterialInterface;
class UArmorVanityItem;

UCLASS(EditInlineNew)
class UArmorMaterialVanityItem : public UVanityItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> IconMaterial;
    
    UPROPERTY(EditAnywhere)
    UArmorVanityItem* LockedToArmor;
    
    UPROPERTY(EditAnywhere)
    TArray<UArmorVanityItem*> BannedArmors;
    
public:
    UArmorMaterialVanityItem();
};

