#include "BaseArmorDamageComponent.h"

UBaseArmorDamageComponent::UBaseArmorDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmorDamageEnabled = true;
    this->Mesh = NULL;
}


