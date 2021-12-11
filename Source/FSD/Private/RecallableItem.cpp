#include "RecallableItem.h"
#include "Net/UnrealNetwork.h"

class AActor;

void ARecallableItem::ServerSpawnItem_Implementation(const FVector& Location, const FRotator& Rotation) {
}
bool ARecallableItem::ServerSpawnItem_Validate(const FVector& Location, const FRotator& Rotation) {
    return true;
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

