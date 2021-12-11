#include "DrinkEffectComponent.h"

class APlayerCharacter;

void UDrinkEffectComponent::StopEffect() {
}



void UDrinkEffectComponent::OnChangedCharacter(APlayerCharacter* changedToCharacter, UClass* DrinkEffectClass) {
}

UDrinkEffectComponent::UDrinkEffectComponent() {
    this->BeerEffectDurationSeconds = 15.00f;
    this->AutoDestroy = true;
    this->EffectIsActive = false;
}

