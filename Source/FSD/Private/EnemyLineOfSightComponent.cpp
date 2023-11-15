#include "EnemyLineOfSightComponent.h"

UEnemyLineOfSightComponent::UEnemyLineOfSightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerMesh = NULL;
    this->LoSInterval = 0.10f;
    this->LoSIntervalVariance = 0.10f;
    this->AutoSetupOwnerMesh = true;
}

bool UEnemyLineOfSightComponent::HasLineOfSight() const {
    return false;
}

bool UEnemyLineOfSightComponent::GetIsDetecting() const {
    return false;
}

void UEnemyLineOfSightComponent::AsyncTrace() {
}


