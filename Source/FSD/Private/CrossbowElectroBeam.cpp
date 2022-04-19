#include "CrossbowElectroBeam.h"
#include "Net/UnrealNetwork.h"

void ACrossbowElectroBeam::RecalculateMovingBeam() {
}

void ACrossbowElectroBeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrossbowElectroBeam, MaxRange);
    DOREPLIFETIME(ACrossbowElectroBeam, Arrow0);
    DOREPLIFETIME(ACrossbowElectroBeam, Arrow1);
}

ACrossbowElectroBeam::ACrossbowElectroBeam() {
    this->MaxRange = 0.00f;
    this->Arrow0 = NULL;
    this->Arrow1 = NULL;
}

