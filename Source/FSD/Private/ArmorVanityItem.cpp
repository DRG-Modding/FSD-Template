#include "ArmorVanityItem.h"

UArmorVanityItem::UArmorVanityItem() {
    this->AllowSleevelessUse = true;
    this->CropBeard = false;
    this->ArmorThickness = 0.00f;
    this->CanOnlyUseDefaultArmorMaterial = false;
    this->DefaultArmorMaterial = NULL;
}

void UArmorVanityItem::SetNewArmorType(UCharacterVanityComponent* Gear) {
}

void UArmorVanityItem::PreviewArmor(AFSDPlayerState* PlayerState, bool Show, bool useDefaultArmorMaterial) const {
}

bool UArmorVanityItem::HasSleevelessArmorType() const {
    return false;
}

EArmorMeshType UArmorVanityItem::GetFPMeshType() const {
    return EArmorMeshType::None;
}


