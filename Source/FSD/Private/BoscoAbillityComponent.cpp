#include "BoscoAbillityComponent.h"

int32 UBoscoAbillityComponent::GetMaxCharges(bool Total) const {
    return 0;
}

bool UBoscoAbillityComponent::GetIsSet() const {
    return false;
}

int32 UBoscoAbillityComponent::GetCharges() const {
    return 0;
}

UBoscoAbillityComponent::UBoscoAbillityComponent() {
    this->ProjectileClass = NULL;
    this->StreamClass = NULL;
    this->AbilityData = NULL;
    this->InitializeAtBeginPlay = false;
}

