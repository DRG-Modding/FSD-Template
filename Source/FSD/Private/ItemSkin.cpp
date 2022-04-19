#include "ItemSkin.h"

class UObject;
class UMaterialInstanceDynamic;
class UItemID;
class AFSDPlayerState;
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

EItemSkinType UItemSkin::GetSkinType() const {
    return EItemSkinType::PaintJob;
}

FText UItemSkin::GetSkinName() const {
    return FText::GetEmpty();
}

UItemID* UItemSkin::GetOwningItem() const {
    return NULL;
}

UPlayerCharacterID* UItemSkin::GetOwningCharacter() const {
    return NULL;
}

UMaterialInstanceDynamic* UItemSkin::CreateIcon(UObject* Owner) const {
    return NULL;
}

UItemSkin::UItemSkin() {
    this->Aquisition = NULL;
    this->UnlockedFromStart = false;
    this->RequiredDLC = NULL;
    this->SkinType = EItemSkinType::PaintJob;
    this->SkinSet = NULL;
    this->DynamicIcon = NULL;
    this->SkinEffect = NULL;
    this->OwningItem = NULL;
    this->OwningCharacter = NULL;
}

