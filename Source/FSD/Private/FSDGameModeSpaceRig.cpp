#include "FSDGameModeSpaceRig.h"

AFSDGameModeSpaceRig::AFSDGameModeSpaceRig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmountOfPlayersSpawnedInMedbay = 0;
    this->StartedSession = false;
}

AActor* AFSDGameModeSpaceRig::GetFreeSpawnOfType(ESpacerigStartType aType, AFSDPlayerController* AController) {
    return NULL;
}


