#include "TerminatorEnemy.h"
#include "HitReactionComponent.h"

ATerminatorEnemy::ATerminatorEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlairAnimation = NULL;
    this->MinFlairAnimCooldown = 1.00f;
    this->MaxFlairAnimationCooldown = 2.00f;
    this->HitReactions = CreateDefaultSubobject<UHitReactionComponent>(TEXT("HitReactions"));
}

void ATerminatorEnemy::All_PlayFlairAnimation_Implementation() {
}


