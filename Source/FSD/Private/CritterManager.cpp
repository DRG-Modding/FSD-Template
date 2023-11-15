#include "CritterManager.h"

UCritterManager::UCritterManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisableCritters = false;
    this->ActivationRange = 4500.00f;
}


