#include "SpacerigStart.h"

ASpacerigStart::ASpacerigStart() : APlayerStart(FObjectInitializer::Get()) {
    this->usedBy = NULL;
    this->StartType = ESpacerigStartType::PlayerHub;
}

