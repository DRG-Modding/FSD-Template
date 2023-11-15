#include "GatheItemsObjective.h"
#include "Net/UnrealNetwork.h"

UGatheItemsObjective::UGatheItemsObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemsRequired = 0;
    this->ItemsSpawnedModifier = 1.50f;
    this->ItemsCollected = 0;
    this->ItemResource = NULL;
}

void UGatheItemsObjective::OnResourceChanged(UCappedResource* CappedResource, float Amount) {
}

void UGatheItemsObjective::OnRep_ItemsCollected(int32 prevAmount) {
}

void UGatheItemsObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGatheItemsObjective, ItemsCollected);
}


