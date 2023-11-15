#include "SpacerigStart.h"

ASpacerigStart::ASpacerigStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->usedBy = NULL;
    this->StartType = ESpacerigStartType::PlayerHub;
}


