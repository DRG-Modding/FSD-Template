#include "PlatformComponent.h"

FPlatformComponent::FPlatformComponent() {
    this->ComponentClass = NULL;
    this->Criteria = EPlatformComponentCriteria::All;
}

