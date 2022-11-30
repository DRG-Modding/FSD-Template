#pragma once
#include "CoreMinimal.h"
#include "VanityItem.h"
#include "ArmorMaterialVanityItem.generated.h"

class UDynamicIcon;
class UMaterialInterface;
class UArmorVanityItem;
class UObject;
class UMaterialInstance;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class UArmorMaterialVanityItem;

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

