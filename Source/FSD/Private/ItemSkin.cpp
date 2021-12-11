#include "ItemSkin.h"

class UObject;
class AFSDPlayerState;
class UItemID;
class UPlayerCharacterID;

bool UItemSkin::Unlock(UObject* WorldContext, UItemID* ItemID, bool broadcast) {
    return false;
}

void UItemSkin::Receive_SkinItem(UObject* Skinnable) const {
}

bool UItemSkin::IsLocked(UObject* WorldContext, UItemID* skinnableID) const {
    return false;
}

bool UItemSkin::IsEquippedOnItem(UItemID* ItemID, AFSDPlayerState* PlayerState) const {
    return false;
}

UItemID* UItemSkin::GetOwningItem() const {
    return NULL;
}

UPlayerCharacterID* UItemSkin::GetOwningCharacter() const {
    return NULL;
}

UItemSkin::UItemSkin() {
    this->UnlockedFromStart = false;
    this->RequiredDLC = NULL;
    this->SkinType = EItemSkinType::Color;
    this->SkinSet = NULL;
    this->SkinIconMaterial = NULL;
    this->OwningItem = NULL;
    this->OwningCharacter = NULL;
}

