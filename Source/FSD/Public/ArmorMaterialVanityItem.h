#pragma once
#include "CoreMinimal.h"
#include "VanityItem.h"
#include "ArmorMaterialVanityItem.generated.h"

class UArmorMaterialVanityItem;
class UArmorVanityItem;
class UDynamicIcon;
class UMaterialInstance;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UArmorMaterialVanityItem : public UVanityItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicIcon* DynamicIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArmorVanityItem* LockedToArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UArmorVanityItem*> BannedArmors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> ClothMaterial;
    
public:
    UArmorMaterialVanityItem();
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceConstant* SetArmorMaterialToTwoSided(UMaterialInstance* Parent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* CreateIcon(UObject* Owner) const;
    
    UFUNCTION(BlueprintCallable)
    static void CreateClothMaterialForAmorVanity(UArmorMaterialVanityItem* armorVanity);
    
};

