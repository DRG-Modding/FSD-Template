#include "VictoryPoseFunctionLibrary.h"

class UObject;
class UVictoryPose;
class UPlayerCharacterID;

bool UVictoryPoseFunctionLibrary::IsRandomVictoryPose(UVictoryPose* VictoryPose) {
    return false;
}

TArray<UVictoryPose*> UVictoryPoseFunctionLibrary::GetOwnedVictoryPoses(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
    return TArray<UVictoryPose*>();
}

UVictoryPose* UVictoryPoseFunctionLibrary::GetEquippedVictoryPose(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
    return NULL;
}

UVictoryPoseFunctionLibrary::UVictoryPoseFunctionLibrary() {
}

