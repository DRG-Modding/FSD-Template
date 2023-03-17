#include "ExterminationReward.h"

void UExterminationReward::OnEnemyKilled(const FGameplayTagContainer& GameplayTags, AActor* killedEnemy) {
}

UExterminationReward::UExterminationReward() {
    this->Resource = NULL;
    this->AwardSize = 1.00f;
}

