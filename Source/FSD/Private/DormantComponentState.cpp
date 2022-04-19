#include "DormantComponentState.h"

FDormantComponentState::FDormantComponentState() {
    this->Collision = ECollisionEnabled::NoCollision;
    this->Active = false;
    this->Visible = false;
}

