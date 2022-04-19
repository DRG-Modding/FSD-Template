#include "VictoryPose.h"

class UObject;
class UPlayerCharacterID;

void UVictoryPose::Unlock(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
}

void UVictoryPose::ResetUnlock(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
}

bool UVictoryPose::IsUnlockedNotFromStart(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
    return false;
}

bool UVictoryPose::IsUnlocked(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
    return false;
}

void UVictoryPose::Equip(UObject* WorldContextObject, UPlayerCharacterID* characterID) const {
}

UVictoryPose::UVictoryPose() {
    this->Aquisition = NULL;
    this->UnlockedFromStart = false;
}

