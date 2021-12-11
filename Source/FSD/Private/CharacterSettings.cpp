#include "CharacterSettings.h"

class UAsyncManager;
class UPlayerCharacterID;

void UCharacterSettings::PreloadAllInventories(UAsyncManager* AsyncManager) {
}

UPlayerCharacterID* UCharacterSettings::GetPlayerCharacterID(const FGuid& ID) const {
    return NULL;
}

UCharacterSettings::UCharacterSettings() {
    this->BoscoID = NULL;
    this->NoHead = NULL;
    this->DefaultHead = NULL;
    this->ThickNeck = NULL;
    this->ThinNeck = NULL;
    this->ThrowItemAnimSettings = NULL;
    this->AutoReloadShout = NULL;
    this->TeleportPositioning = NULL;
    this->TeleportPlacement = NULL;
}

