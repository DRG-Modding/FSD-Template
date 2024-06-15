#include "DeepScanObjective.h"
#include "Net/UnrealNetwork.h"

UDeepScanObjective::UDeepScanObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FirstScanDoneShout = NULL;
    this->SecondToLastScanDoneShout = NULL;
    this->GenericScanDoneShout = NULL;
    this->AllScansDoneShout = NULL;
    this->AllScansDoneShoutMissingSecondaries = NULL;
    this->HiddenItems = 0;
    this->ExtraHiddenItems = 1;
    this->HiddenItemsFound = 0;
    this->ResourceRoomIndex = -1;
    this->CollecResourcsVeinCount = 0;
    this->CollectResourcePositioning = NULL;
    this->CollectedResource = NULL;
    this->CollectResourceTarget = 0;
    this->CollectResourceCurrent = 0;
    this->State = EDeepScanState::FindItems;
}

void UDeepScanObjective::OnResourceChanged(UCappedResource* CappedResource, float amount) {
}

void UDeepScanObjective::OnRep_State(EDeepScanState oldState) {
}

void UDeepScanObjective::OnRep_ItemsCollected(int32 prevAmount) {
}

void UDeepScanObjective::OnRep_CollectResourceCurrent(int32 prevAmount) {
}

void UDeepScanObjective::OnCrystalScanned() {
}


void UDeepScanObjective::ChangeState(EDeepScanState NewState) {
}

void UDeepScanObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDeepScanObjective, HiddenItemsFound);
    DOREPLIFETIME(UDeepScanObjective, CollectResourceCurrent);
    DOREPLIFETIME(UDeepScanObjective, State);
}


