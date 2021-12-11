#include "DrinkableItem.h"
#include "Net/UnrealNetwork.h"

void ADrinkableItem::OnRep_DrinkableData() {
}

void ADrinkableItem::Consume() {
}

void ADrinkableItem::ClientConsumed_Implementation() {
}
bool ADrinkableItem::ClientConsumed_Validate() {
    return true;
}


void ADrinkableItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADrinkableItem, DrinkableData);
}

ADrinkableItem::ADrinkableItem() {
    this->DrinkableData = NULL;
}

