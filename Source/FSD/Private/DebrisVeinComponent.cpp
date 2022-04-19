#include "DebrisVeinComponent.h"

UDebrisVeinComponent::UDebrisVeinComponent() {
    this->Material = NULL;
    this->CarverType = EDebrisCarvedType::Large;
    this->VeinCreator = NULL;
}

