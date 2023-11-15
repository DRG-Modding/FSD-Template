#include "FloatPerkComponent.h"

UFloatPerkComponent::UFloatPerkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FloatValue = 0.00f;
    this->PlayerCharacter = NULL;
}



