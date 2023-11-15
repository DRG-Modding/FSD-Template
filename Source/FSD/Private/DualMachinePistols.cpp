#include "DualMachinePistols.h"

ADualMachinePistols::ADualMachinePistols(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EmptyClipStatusEffect = NULL;
}

void ADualMachinePistols::Server_TriggerStatusEffect_Implementation() {
}


