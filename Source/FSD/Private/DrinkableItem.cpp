#include "DrinkableItem.h"
#include "Net/UnrealNetwork.h"

ADrinkableItem::ADrinkableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DrinkableData = NULL;
}

void ADrinkableItem::OnRep_DrinkableData() {
}

void ADrinkableItem::OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode) {
}

void ADrinkableItem::Consume() {
}

void ADrinkableItem::ClientConsumed_Implementation() {
}


void ADrinkableItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADrinkableItem, DrinkableData);
}


