#include "BTTask_FakePhysicsMove.h"

UBTTask_FakePhysicsMove::UBTTask_FakePhysicsMove() {
    this->MinTime = 0.00f;
    this->EndMaxSpeed = 10.00f;
    this->EndRequireSolidGround = false;
    this->MoveSettings = NULL;
}

