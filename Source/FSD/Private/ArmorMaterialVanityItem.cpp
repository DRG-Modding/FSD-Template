#include "ArmorMaterialVanityItem.h"

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

