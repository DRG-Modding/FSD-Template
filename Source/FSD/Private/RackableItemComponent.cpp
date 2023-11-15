#include "RackableItemComponent.h"

URackableItemComponent::URackableItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AddToCharacterInventory = false;
    this->RackKey = -1;
}


