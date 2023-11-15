#include "DrinkEffectComponent.h"

UDrinkEffectComponent::UDrinkEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeerEffectDurationSeconds = 15.00f;
    this->AutoDestroy = true;
    this->EffectIsActive = false;
    this->ActivatesOnlyOnceWhenDrinking = false;
}

void UDrinkEffectComponent::StopEffect() {
}



void UDrinkEffectComponent::OnChangedCharacter(APlayerCharacter* changedToCharacter, UClass* DrinkEffectClass) {
}

bool UDrinkEffectComponent::GetActivateOnlyWhenDrinking() const {
    return false;
}


