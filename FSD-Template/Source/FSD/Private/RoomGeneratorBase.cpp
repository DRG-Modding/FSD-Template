#include "RoomGeneratorBase.h"

URoomGeneratorBase::URoomGeneratorBase() {
    this->Bounds = 0.00f;
    this->CanOnlyBeUsedOnce = false;
    this->MirrorSupport = ERoomMirroringSupport::MirrorAroundX;
}

