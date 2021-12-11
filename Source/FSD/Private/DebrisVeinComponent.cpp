#include "DebrisVeinComponent.h"

UDebrisVeinComponent::UDebrisVeinComponent() {
    this->Material = NULL;
    this->carverType = EDebrisCarvedType::Large;
    this->VeinCreator = NULL;
}

