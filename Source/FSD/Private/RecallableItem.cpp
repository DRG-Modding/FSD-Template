#include "RecallableItem.h"
#include "Net/UnrealNetwork.h"

ARecallableItem::ARecallableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemType = NULL;
}

void ARecallableItem::ServerSpawnItem_Implementation(const FVector& Location, const FRotator& Rotation) {
}


void ARecallableItem::OnRep_ActiveItems() {
}

void ARecallableItem::ItemReturnFinished(AActor* Item, bool success) {
}

bool ARecallableItem::CanSpawnItem_Implementation(const FVector& Location, const FRotator& Rotation) {
    return false;
}

void ARecallableItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARecallableItem, ActiveItems);
}


