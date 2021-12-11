#include "SpiderEnemy.h"

class UStaticMeshComponent;

void ASpiderEnemy::PlayHitReaction() {
}

void ASpiderEnemy::OnDamaged(float Damage) {
}

UStaticMeshComponent* ASpiderEnemy::CreateHeadGore() {
    return NULL;
}


ASpiderEnemy::ASpiderEnemy() {
    this->FirstHitReactBlendIn = 0.10f;
    this->OverrideHitReactBlendIn = 0.05f;
    this->GoreMesh = NULL;
    this->ApplyDifficultySpeedModifier = true;
    this->AttackDamageModifier = 1.00f;
    this->LimitRagdollSpeed = false;
    this->MaxRagdollSpeed = 1000.00f;
}

