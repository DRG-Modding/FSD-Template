#include "FakeSawMover.h"

FFakeSawMover::FFakeSawMover() {
    this->VelOverTime = NULL;
    this->SpeedCof = 0.00f;
    this->TickRate = 0.00f;
    this->TickTime = 0.00f;
    this->AccumulatedTime = 0.00f;
    this->TotalTime = 0.00f;
    this->Moving = false;
    this->GravityTimer = 0.00f;
}

