#include "VanitySettings.h"

class UTexture2D;
class UObject;
class UPlayerCharacterID;

bool UVanitySettings::HasNewVanityNotification(UObject* WorldContextObject, EVanitySlot Slot, UPlayerCharacterID* characterID) {
    return false;
}

UTexture2D* UVanitySettings::GetVanityCategoryIcon(EVanitySlot Slot) const {
    return NULL;
}

void UVanitySettings::GetUnlockedStoreVanityCount(UObject* WorldContextObject, EVanitySlot Slot, UPlayerCharacterID* characterID, int32& owned, int32& Total) {
}

UVanitySettings::UVanitySettings() {
    this->MedbayArmorItem = NULL;
}

