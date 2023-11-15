#include "DebrisVeinComponent.h"

UDebrisVeinComponent::UDebrisVeinComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Material = NULL;
    this->CarverType = EDebrisCarvedType::Large;
    this->VeinCreator = NULL;
}


