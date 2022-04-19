#include "CharacterVanityItems.h"

class UObject;
class UPlayerCharacterID;
class UVanityItem;

void UCharacterVanityItems::SortVanityItems(UObject* WorldContextObject, UPlayerCharacterID* characterID, TArray<UVanityItem*>& VanityItems) {
}

TArray<UVanityItem*> UCharacterVanityItems::GetVanityItems(UObject* WorldContextObject, EVanitySlot Slot, bool onlyStoreItems, UPlayerCharacterID* characterID) {
    return TArray<UVanityItem*>();
}

UVanityItem* UCharacterVanityItems::GetVanityItem(const FGuid& VanityID) const {
    return NULL;
}

TArray<UVanityItem*> UCharacterVanityItems::GetUnLockedVanityItems(UObject* WorldContextObject, EVanitySlot Slot, bool onlyStoreItems, UPlayerCharacterID* characterID) {
    return TArray<UVanityItem*>();
}

TArray<UVanityItem*> UCharacterVanityItems::GetLockedVanityItems(UObject* WorldContextObject, EVanitySlot Slot, UPlayerCharacterID* characterID) {
    return TArray<UVanityItem*>();
}

TArray<UVanityItem*> UCharacterVanityItems::GetItems(EVanitySlot Slot, bool onlyStoreItems) const {
    return TArray<UVanityItem*>();
}

UVanityItem* UCharacterVanityItems::GetDefaultVanityItem(UObject* WorldContext, EVanitySlot Slot, UPlayerCharacterID* characterID) {
    return NULL;
}

UCharacterVanityItems::UCharacterVanityItems() {
    this->HeadSchematicBank = NULL;
    this->BeardSchematicBank = NULL;
    this->EyebrowSchematicBank = NULL;
    this->MoustacheSchematicBank = NULL;
    this->SideburnSchematicBank = NULL;
    this->BeardMaterialSchematicBank = NULL;
    this->SkinMaterialSchematicBank = NULL;
    this->OwningCharacter = NULL;
}

