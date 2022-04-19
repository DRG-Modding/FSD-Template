#include "BoscoAbillityComponent.h"

int32 UBoscoAbillityComponent::GetMaxCharges() const {
    return 0;
}

int32 UBoscoAbillityComponent::GetCharges() const {
    return 0;
}

UBoscoAbillityComponent::UBoscoAbillityComponent() {
    this->ProjectileClass = NULL;
    this->Animation = NULL;
    this->VoiceOnUse = NULL;
}

