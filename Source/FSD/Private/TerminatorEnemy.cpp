#include "TerminatorEnemy.h"
#include "HitReactionComponent.h"

void ATerminatorEnemy::All_PlayFlairAnimation_Implementation() {
}

ATerminatorEnemy::ATerminatorEnemy() {
    this->FlairAnimation = NULL;
    this->MinFlairAnimCooldown = 1.00f;
    this->MaxFlairAnimationCooldown = 2.00f;
    this->HitReactions = CreateDefaultSubobject<UHitReactionComponent>(TEXT("HitReactions"));
}

