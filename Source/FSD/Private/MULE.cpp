#include "MULE.h"
#include "Net/UnrealNetwork.h"

void AMULE::SetIsDown(bool NewIsDown) {
}



void AMULE::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMULE, IsDown);
}

AMULE::AMULE() {
    this->IsDown = false;
}

