#include "FSDSessionUpdater.h"
#include "FSDLobbyHandler.h"
#include "FSDSessionHandler.h"

UFSDSessionUpdater::UFSDSessionUpdater() {
    this->SessionHandler = CreateDefaultSubobject<UFSDSessionHandler>(TEXT("SessionHandler"));
    this->LobbyHandler = CreateDefaultSubobject<UFSDLobbyHandler>(TEXT("LobbyHandler"));
}

