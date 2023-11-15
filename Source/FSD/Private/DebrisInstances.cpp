#include "DebrisInstances.h"

UDebrisInstances::UDebrisInstances(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSelectable = false;
    this->DebrisBase = NULL;
    this->DebrisIndex = 0;
}


