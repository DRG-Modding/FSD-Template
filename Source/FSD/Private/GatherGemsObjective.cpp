#include "GatherGemsObjective.h"
#include "Net/UnrealNetwork.h"

class UCappedResource;

void UGatherGemsObjective::OnResourceChanged(UCappedResource* CappedResource, float Amount) {
}

void UGatherGemsObjective::OnRep_GemsCollected(int32 prevAmount) {
}

void UGatherGemsObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGatherGemsObjective, GemsCollected);
}

UGatherGemsObjective::UGatherGemsObjective() {
    this->GemsRequired = 0;
    this->GemsSpawnedModifier = 1.50f;
    this->GemsCollected = 0;
    this->GemResource = NULL;
}

