#include "HealthDamageTracker.h"

UHealthDamageTracker::UHealthDamageTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TiggerOnPercentage = 0.33f;
    this->Health = NULL;
}

void UHealthDamageTracker::ResetTrackedDamage() {
}

void UHealthDamageTracker::OnDamageTaken(float Amount) {
}


