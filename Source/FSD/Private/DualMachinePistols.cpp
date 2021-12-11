#include "DualMachinePistols.h"

void ADualMachinePistols::Server_TriggerStatusEffect_Implementation() {
}
bool ADualMachinePistols::Server_TriggerStatusEffect_Validate() {
    return true;
}

ADualMachinePistols::ADualMachinePistols() {
    this->EmptyClipStatusEffect = NULL;
}

