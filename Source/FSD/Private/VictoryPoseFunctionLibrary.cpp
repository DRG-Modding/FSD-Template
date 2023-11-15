#include "VictoryPoseFunctionLibrary.h"

UVictoryPoseFunctionLibrary::UVictoryPoseFunctionLibrary() {
}

bool UVictoryPoseFunctionLibrary::IsRandomVictoryPose(UVictoryPose* VictoryPose) {
    return false;
}

TArray<UVictoryPose*> UVictoryPoseFunctionLibrary::GetOwnedVictoryPoses(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
    return TArray<UVictoryPose*>();
}

UVictoryPose* UVictoryPoseFunctionLibrary::GetEquippedVictoryPose(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
    return NULL;
}


