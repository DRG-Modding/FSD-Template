#include "EnemyLineOfSightComponent.h"

bool UEnemyLineOfSightComponent::HasLineOfSight() const {
    return false;
}

bool UEnemyLineOfSightComponent::GetIsDetecting() const {
    return false;
}

void UEnemyLineOfSightComponent::AsyncTrace() {
}

UEnemyLineOfSightComponent::UEnemyLineOfSightComponent() {
    this->OwnerMesh = NULL;
    this->LoSInterval = 0.10f;
    this->LoSIntervalVariance = 0.10f;
    this->AutoSetupOwnerMesh = true;
}

