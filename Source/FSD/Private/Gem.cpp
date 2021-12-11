#include "Gem.h"

void AGem::SetHasBeenReleased(bool NewHasBeenReleased) {
}

bool AGem::GetHasBeenReleased() const {
    return false;
}

AGem::AGem() {
    this->ResourceType = NULL;
    this->ResourceAmount = 1.00f;
    this->hasBeenReleased = false;
}

