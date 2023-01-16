#include "FSDGameModeSpaceRig.h"

class AActor;
class AFSDPlayerController;

AActor* AFSDGameModeSpaceRig::GetFreeSpawnOfType(ESpacerigStartType aType, AFSDPlayerController* AController) {
    return NULL;
}

AFSDGameModeSpaceRig::AFSDGameModeSpaceRig() {
    this->AmountOfPlayersSpawnedInMedbay = 0;
    this->StartedSession = false;
}

