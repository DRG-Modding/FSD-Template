#include "RecallableItem.h"
#include "Net/UnrealNetwork.h"

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

ARecallableItem::ARecallableItem() {
    this->ItemType = NULL;
}

