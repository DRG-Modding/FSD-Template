#include "FSDSessionUpdater.h"
#include "FSDSessionHandler.h"
#include "FSDLobbyHandler.h"

UFSDSessionUpdater::UFSDSessionUpdater() {
    this->SessionHandler = CreateDefaultSubobject<UFSDSessionHandler>(TEXT("SessionHandler"));
    this->LobbyHandler = CreateDefaultSubobject<UFSDLobbyHandler>(TEXT("LobbyHandler"));
}

