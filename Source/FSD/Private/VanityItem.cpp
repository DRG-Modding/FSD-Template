#include "VanityItem.h"

class UObject;
class AFSDPlayerState;
class UPlayerCharacterID;
class UTexture;
class APlayerCharacter;

bool UVanityItem::RemoveFromOwned(UObject* WorldContext) {
    return false;
}

void UVanityItem::PreviewItem(AFSDPlayerState* PlayerState, bool Show) const {
}

bool UVanityItem::IsOwned(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
    return false;
}

bool UVanityItem::IsEquipped(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
    return false;
}

bool UVanityItem::HasEventSource() const {
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

UTexture* UVanityItem::GetIcon() const {
    return NULL;
}

FCraftingCost UVanityItem::GetFashioniteCost() const {
    return FCraftingCost{};
}

FVanityEventSource UVanityItem::GetEventSource() const {
    return FVanityEventSource{};
}

int32 UVanityItem::GetCraftingCreditsCost() const {
    return 0;
}

FText UVanityItem::GetCraftableName() const {
    return FText::GetEmpty();
}

FText UVanityItem::GetCraftableDescription() const {
    return FText::GetEmpty();
}

void UVanityItem::FixupAquisitionLogic() {
}

void UVanityItem::CraftItemWithFashionite(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
}

void UVanityItem::CraftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
}

bool UVanityItem::CanCraftWithFashionite(UObject* WorldContextObject) const {
    return false;
}

bool UVanityItem::CanCraft(UObject* WorldContextObject) const {
    return false;
}

void UVanityItem::ApplyItemPermanently(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
}

void UVanityItem::ApplyItem(APlayerCharacter* Player, bool isPermanent) const {
}

UVanityItem::UVanityItem() {
    this->IsPartOfRandomization = true;
    this->Aquisition = NULL;
    this->EventSourceAsset = NULL;
    this->IconGenerationCameraKey = NULL;
    this->RequiredDLC = NULL;
    this->CraftingRestrictionDLC = NULL;
    this->CraftingPlayerRankRequired = 0;
    this->CraftingCreditsCost = 0;
}

