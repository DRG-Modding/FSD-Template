#include "HealthDamageTracker.h"

void UHealthDamageTracker::ResetTrackedDamage() {
}

void UHealthDamageTracker::OnDamageTaken(float Amount) {
}

UHealthDamageTracker::UHealthDamageTracker() {
    this->TiggerOnPercentage = 0.33f;
    this->Health = NULL;
}

