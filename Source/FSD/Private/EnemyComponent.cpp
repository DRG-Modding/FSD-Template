#include "EnemyComponent.h"

UEnemyComponent::UEnemyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Family = NULL;
    this->KillShout = NULL;
    this->EnemyID = NULL;
}

UEnemyID* UEnemyComponent::GetID() {
    return NULL;
}

FText UEnemyComponent::GetFamilyName() const {
    return FText::GetEmpty();
}

UTexture2D* UEnemyComponent::GetFamilyIcon() const {
    return NULL;
}


