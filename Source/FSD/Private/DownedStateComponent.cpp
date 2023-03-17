#include "DownedStateComponent.h"
#include "Templates/SubclassOf.h"

void UDownedStateComponent::TriggerDownedBombDamage() {
}

void UDownedStateComponent::Server_TriggerDownedBomb_Implementation() {
}


UDamageComponent* UDownedStateComponent::CreateDownedBombDamage(TSubclassOf<UDamageComponent> DamageClass) {
    return NULL;
}

UDownedStateComponent::UDownedStateComponent() {
    this->DownedHealthLossPerSecond = 25.00f;
    this->TerrainRemovedFallThreshold = 5.00f;
    this->DownedBombActive = false;
    this->DownedBombDamage = NULL;
}

