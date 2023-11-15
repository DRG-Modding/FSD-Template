#include "EnemyAttackerPositioningComponent.h"

UEnemyAttackerPositioningComponent::UEnemyAttackerPositioningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FreePositions.AddDefaulted(32);
    this->FlyingFreePositions.AddDefaulted(32);
}


