#include "RivalBombNodeAniminstance.h"

void URivalBombNodeAniminstance::SetRivalBombNodeState(ERivalBombNodeState NewState) {
}

URivalBombNodeAniminstance::URivalBombNodeAniminstance() {
    this->IsActive = false;
    this->IsFailed = false;
    this->isDone = false;
    this->StartOffset = 0.00f;
}

