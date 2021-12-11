#include "SubHealthComponent.h"

void USubHealthComponent::SetCanTakeDamage(bool canTakeDamage) {
}

bool USubHealthComponent::IsDead() const {
    return false;
}

bool USubHealthComponent::IsAlive() const {
    return false;
}

float USubHealthComponent::GetHealthPct() const {
    return 0.0f;
}

float USubHealthComponent::GetHealth() const {
    return 0.0f;
}

bool USubHealthComponent::GetCanTakeDamage() const {
    return false;
}

USubHealthComponent::USubHealthComponent() {
    this->HealthbarType = EHealthbarType::None;
    this->EnemyHealthScaling = EEnemyHealthScaling::LargeEnemy;
}

