#include "ExterminationReward.h"

UExterminationReward::UExterminationReward() {
    this->Resource = NULL;
    this->AwardSize = 1.00f;
}

void UExterminationReward::OnEnemyKilled(const FGameplayTagContainer& GameplayTags, AActor* killedEnemy) {
}


