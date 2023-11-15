#include "ControlEnemyUsable.h"

UControlEnemyUsable::UControlEnemyUsable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Usable = true;
    this->TurnOffAfterUse = true;
}


