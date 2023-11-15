#include "Gem.h"
#include "CarriableInstantUsable.h"

AGem::AGem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Usable = CreateDefaultSubobject<UCarriableInstantUsable>(TEXT("Usable"));
    this->ResourceType = NULL;
    this->ResourceAmount = 1.00f;
    this->hasBeenReleased = false;
}

void AGem::SetHasBeenReleased(bool NewHasBeenReleased) {
}

bool AGem::GetHasBeenReleased() const {
    return false;
}


