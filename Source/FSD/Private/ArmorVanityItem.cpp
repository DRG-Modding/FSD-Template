#include "ArmorVanityItem.h"

class AFSDPlayerState;

void UArmorVanityItem::PreviewArmor(AFSDPlayerState* PlayerState, bool Show, bool useDefaultArmorMaterial) const {
}

UArmorVanityItem::UArmorVanityItem() {
    this->CropBeard = false;
    this->ArmorThickness = 0.00f;
    this->CanOnlyUseDefaultArmorMaterial = false;
    this->DefaultArmorMaterial = NULL;
}

