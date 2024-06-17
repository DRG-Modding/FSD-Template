#include "CrawlerEnemy.h"
#include "BallisticMovementComponent.h"
#include "MeleeAttackComponent.h"

ACrawlerEnemy::ACrawlerEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeleeAttack = CreateDefaultSubobject<UMeleeAttackComponent>(TEXT("MeleeAttack"));
    this->BallisticMovement = CreateDefaultSubobject<UBallisticMovementComponent>(TEXT("BallisticMovement"));
}


