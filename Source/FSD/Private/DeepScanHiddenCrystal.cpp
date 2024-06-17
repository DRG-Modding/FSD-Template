#include "DeepScanHiddenCrystal.h"
#include "Net/UnrealNetwork.h"

ADeepScanHiddenCrystal::ADeepScanHiddenCrystal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrystalIndex = 0;
    this->HasEquipmentBeenCalled = false;
}

void ADeepScanHiddenCrystal::SetEquipmentCalled() {
}

void ADeepScanHiddenCrystal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADeepScanHiddenCrystal, HasEquipmentBeenCalled);
}


