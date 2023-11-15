#include "PlayerAttackPositionComponent.h"

UPlayerAttackPositionComponent::UPlayerAttackPositionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FreePositions.AddDefaulted(32);
    this->FlyingFreePositions.AddDefaulted(32);
    this->OnZiplineFlyingModifier = 1.50f;
    this->OnZiplineWalkingModifier = 0.50f;
}

void UPlayerAttackPositionComponent::SetGameplayModifier(float modifier) {
}


