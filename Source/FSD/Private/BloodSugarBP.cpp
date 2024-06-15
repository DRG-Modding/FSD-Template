#include "BloodSugarBP.h"

UBloodSugarBP::UBloodSugarBP() {
    this->Resource = NULL;
    this->AwardSize = 1.00f;
    this->HealthLossInverval = 1.00f;
    this->HealthLossPerTick = 0.00f;
    this->MinHealthAllowed = 0.00f;
    this->DamageClass = NULL;
}

void UBloodSugarBP::Timer_Tick() {
}

void UBloodSugarBP::OnEnemyKilled(const FGameplayTagContainer& GameplayTags, AActor* killedEnemy) {
}


