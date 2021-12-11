#include "DeepRepPath.h"

FDeepRepPath::FDeepRepPath() {
    this->PathLength = 0;
    this->State = EDeepMovementState::Stationary;
    this->StateBits = 0;
}

