#include "FakeMoverState.h"

FFakeMoverState::FFakeMoverState() {
    this->TickRate = 0.00f;
    this->TickTime = 0.00f;
    this->AccumulatedTime = 0.00f;
    this->Target = NULL;
    this->NearSurface = false;
    this->SignedDistToSurface = 0.00f;
}

