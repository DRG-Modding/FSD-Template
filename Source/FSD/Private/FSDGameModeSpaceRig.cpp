#include "FSDGameModeSpaceRig.h"

class AFSDPlayerController;
class AActor;

AActor* AFSDGameModeSpaceRig::GetFreeSpawnOfType(ESpacerigStartType aType, AFSDPlayerController* AController) {
    return NULL;
}

AFSDGameModeSpaceRig::AFSDGameModeSpaceRig() {
    this->AmountOfPlayersSpawnedInMedbay = 0;
    this->StartedSession = false;
}

