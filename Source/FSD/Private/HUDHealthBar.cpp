#include "HUDHealthBar.h"

class UHealth;
class IHealth;

void UHUDHealthBar::SetHealthComponent(const TScriptInterface<IHealth>& Health, float Damage) {
}

float UHUDHealthBar::GetCurrentHealth() const {
    return 0.0f;
}

UHUDHealthBar::UHUDHealthBar() {
    this->OutlineThickness = 2;
    this->HealthAnimationFactor = 0.50f;
    this->HealthPerCell = 15.00f;
    this->MinHealthCells = 0;
    this->MaxHealthCells = 20;
    this->AnimatedHealth = 0.00f;
    this->MaxHealth = 0.00f;
}

