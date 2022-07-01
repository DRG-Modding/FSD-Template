#include "EnemyHealthComponent.h"

UEnemyHealthComponent::UEnemyHealthComponent() {
    this->EnemyHealthScaling = EEnemyHealthScaling::SmallEnemy;
    this->Courage = 0.00f;
    this->MaxHealth = 100.00f;
    this->bShowHealthBar = true;
    this->bIsBossFight = false;
    this->BossFightHealthBarSegments = 0;
    this->bRegisterEnemy = true;
}

