#include "ExterminationReward.h"

class AActor;

void UExterminationReward::OnEnemyKilled(const FGameplayTagContainer& GameplayTags, AActor* killedEnemy) {
}

UExterminationReward::UExterminationReward() {
    this->Resource = NULL;
    this->AwardSize = 1.00f;
}

