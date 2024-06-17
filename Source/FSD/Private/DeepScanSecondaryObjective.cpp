#include "DeepScanSecondaryObjective.h"
#include "Net/UnrealNetwork.h"

UDeepScanSecondaryObjective::UDeepScanSecondaryObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HiddenItems = 0;
    this->ExtraHiddenItems = 1;
    this->HiddenItemsFound = 0;
}

void UDeepScanSecondaryObjective::OnRep_ItemsCollected(int32 prevAmount) {
}

void UDeepScanSecondaryObjective::OnCrystalScanned() {
}

void UDeepScanSecondaryObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDeepScanSecondaryObjective, HiddenItemsFound);
}


