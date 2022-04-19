#include "Gem.h"
#include "CarriableInstantUsable.h"

void AGem::SetHasBeenReleased(bool NewHasBeenReleased) {
}

bool AGem::GetHasBeenReleased() const {
    return false;
}

AGem::AGem() {
    this->Usable = CreateDefaultSubobject<UCarriableInstantUsable>(TEXT("Usable"));
    this->ResourceType = NULL;
    this->ResourceAmount = 1.00f;
    this->hasBeenReleased = false;
}

