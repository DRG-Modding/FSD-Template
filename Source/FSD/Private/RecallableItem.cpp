#include "RecallableItem.h"
#include "Net/UnrealNetwork.h"

ARecallableItem::ARecallableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemType = NULL;
}

void ARecallableItem::ServerSpawnItemAttached_Implementation(AActor* InAttachActor, UPrimitiveComponent* InAttachComponent, FName InAttachBoneName, const FVector& LocalLocation, const FRotator& LocalRotation) {
}

void ARecallableItem::ServerSpawnItem_Implementation(const FVector& WorldLocation, const FRotator& WorldRotation) {
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


