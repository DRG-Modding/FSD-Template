#include "DeepScanObjectiveBase.h"
#include "Net/UnrealNetwork.h"

UDeepScanObjectiveBase::UDeepScanObjectiveBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HiddenItemResource = NULL;
    this->UIComponent = NULL;
}

void UDeepScanObjectiveBase::OnPlayerRegistered(APlayerCharacter* Player) {
}

void UDeepScanObjectiveBase::All_TryAddPingUIComponent_Implementation(APlayerCharacter* Player) {
}

void UDeepScanObjectiveBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDeepScanObjectiveBase, HiddenItemInstances);
}


