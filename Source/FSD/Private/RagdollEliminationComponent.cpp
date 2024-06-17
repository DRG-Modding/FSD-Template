#include "RagdollEliminationComponent.h"

URagdollEliminationComponent::URagdollEliminationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 0.00f;
}

void URagdollEliminationComponent::OnEnemyKilled(const FGameplayTagContainer& GameplayTags, AActor* killedEnemy) {
}


