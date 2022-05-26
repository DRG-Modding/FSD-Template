#include "InventoryBase.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UInventoryBase::Server_SetEquippedActor_Implementation(const FEquippedActorData& Actor, bool CallClientDelayed) {
}

void UInventoryBase::Server_EquipExternalActor_Implementation(AActor* Actor) {
}

void UInventoryBase::OnRep_EquippedActor(FEquippedActorData& OldActor) {
}

void UInventoryBase::OnRep_ActorsSelectable() {
}

void UInventoryBase::OnRep_ActorsNonSelectable() {
}

TArray<AActor*> UInventoryBase::GetSelectableActors() const {
    return TArray<AActor*>();
}

TArray<AActor*> UInventoryBase::GetAllItems() const {
    return TArray<AActor*>();
}

void UInventoryBase::EquipPrevious() {
}

void UInventoryBase::EquipNull() {
}

void UInventoryBase::EquipNext() {
}

void UInventoryBase::EquipLast() {
}

void UInventoryBase::EquipAtIndex(int32 Index, bool ignoreUsing) {
}

void UInventoryBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryBase, ActorsSelectable);
    DOREPLIFETIME(UInventoryBase, ActorsNonSelectable);
    DOREPLIFETIME(UInventoryBase, EquippedActor);
}

UInventoryBase::UInventoryBase() {
    this->LastEquippedActors[0] = NULL;
    this->LastEquippedActors[1] = NULL;
}

