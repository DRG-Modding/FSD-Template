#include "ArmorMaterialVanityItem.h"

class UMaterialInstance;
class UObject;
class UMaterialInstanceConstant;
class UArmorMaterialVanityItem;
class UMaterialInstanceDynamic;

UMaterialInstanceConstant* UArmorMaterialVanityItem::SetArmorMaterialToTwoSided(UMaterialInstance* Parent) {
    return NULL;
}

UMaterialInstanceDynamic* UArmorMaterialVanityItem::CreateIcon(UObject* Owner) const {
    return NULL;
}

void UArmorMaterialVanityItem::CreateClothMaterialForAmorVanity(UArmorMaterialVanityItem* armorVanity) {
}

UArmorMaterialVanityItem::UArmorMaterialVanityItem() {
    this->DynamicIcon = NULL;
    this->LockedToArmor = NULL;
}

