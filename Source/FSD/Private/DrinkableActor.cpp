#include "DrinkableActor.h"
#include "Net/UnrealNetwork.h"

void ADrinkableActor::Pickup(APlayerCharacter* byCharacter) {
}



void ADrinkableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADrinkableActor, DrinkableData);
}

ADrinkableActor::ADrinkableActor() {
    this->DrinkableData = NULL;
}

