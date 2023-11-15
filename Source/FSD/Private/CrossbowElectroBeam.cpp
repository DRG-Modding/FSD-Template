#include "CrossbowElectroBeam.h"
#include "Net/UnrealNetwork.h"

ACrossbowElectroBeam::ACrossbowElectroBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxRange = 0.00f;
    this->Arrow0 = NULL;
    this->Arrow1 = NULL;
}

void ACrossbowElectroBeam::RecalculateMovingBeam() {
}

void ACrossbowElectroBeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrossbowElectroBeam, MaxRange);
    DOREPLIFETIME(ACrossbowElectroBeam, Arrow0);
    DOREPLIFETIME(ACrossbowElectroBeam, Arrow1);
}


