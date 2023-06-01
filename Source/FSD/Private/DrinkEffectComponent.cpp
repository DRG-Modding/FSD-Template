#include "DrinkEffectComponent.h"

void UDrinkEffectComponent::StopEffect() {
}



void UDrinkEffectComponent::OnChangedCharacter(APlayerCharacter* changedToCharacter, UClass* DrinkEffectClass) {
}

bool UDrinkEffectComponent::GetActivateOnlyWhenDrinking() const {
    return false;
}

UDrinkEffectComponent::UDrinkEffectComponent() {
    this->BeerEffectDurationSeconds = 15.00f;
    this->AutoDestroy = true;
    this->EffectIsActive = false;
    this->ActivatesOnlyOnceWhenDrinking = false;
}

