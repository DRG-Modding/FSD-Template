#include "DeadStateComponent.h"

UDeadStateComponent::UDeadStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 2;
    this->respawnDelay = 0.00f;
}



