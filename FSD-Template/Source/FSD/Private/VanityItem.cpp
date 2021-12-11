#include "VanityItem.h"

class UObject;
class AFSDPlayerState;
class UPlayerCharacterID;
class UTexture;
class UTexture2D;
class APlayerCharacter;

bool UVanityItem::RemoveFromOwned(UObject* WorldContext) {
    return false;
}

void UVanityItem::PreviewItem(AFSDPlayerState* PlayerState, bool Show) const {
}

void UVanityItem::MarkAsUnLocked() {
}

bool UVanityItem::IsOwned(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
    return false;
}

bool UVanityItem::IsEquipped(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
    return false;
}

void UVanityItem::GiftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
}

EVanitySlot UVanityItem::GetVanitySlot() const {
    return EVanitySlot::Head;
}

TArray<FCraftingCost> UVanityItem::GetResourceCost() const {
    return TArray<FCraftingCost>();
}

int32 UVanityItem::GetRequiredPlayerRank() const {
    return 0;
}

bool UVanityItem::GetIsUnLockedFromStart() const {
    return false;
}

UTexture* UVanityItem::GetIcon(UObject* WorldContextObject) const {
    return NULL;
}

int32 UVanityItem::GetCraftingCreditsCost() const {
    return 0;
}

FText UVanityItem::GetCraftableName() const {
    return FText::GetEmpty();
}

UTexture2D* UVanityItem::GetCraftableIcon() const {
    return NULL;
}

FText UVanityItem::GetCraftableDescription() const {
    return FText::GetEmpty();
}

void UVanityItem::CraftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
}

void UVanityItem::ClearUnLockedMark() {
}

bool UVanityItem::CanCraft(UObject* WorldContextObject) const {
    return false;
}

void UVanityItem::ApplyItemPermanently(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
}

void UVanityItem::ApplyItem(APlayerCharacter* Player, bool isPermanent) const {
}

UVanityItem::UVanityItem() {
    this->SortingPriority = 0;
    this->Icon = NULL;
    this->IsPartOfRandomization = true;
    this->IconGenerationCameraKey = NULL;
    this->RequiredDLC = NULL;
    this->CraftingRestrictionDLC = NULL;
    this->bUnLockedFlag = false;
    this->CraftingPlayerRankRequired = 0;
    this->CraftingCreditsCost = 0;
}

