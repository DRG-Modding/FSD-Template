#include "GatherGemsObjective.h"
#include "Net/UnrealNetwork.h"

UGatherGemsObjective::UGatherGemsObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GemsRequired = 0;
    this->GemsSpawnedModifier = 1.50f;
    this->GemsCollected = 0;
    this->GemResource = NULL;
}

void UGatherGemsObjective::OnResourceChanged(UCappedResource* CappedResource, float amount) {
}

void UGatherGemsObjective::OnRep_GemsCollected(int32 prevAmount) {
}

void UGatherGemsObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGatherGemsObjective, GemsCollected);
}


