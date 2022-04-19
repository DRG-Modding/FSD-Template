#include "EnemyAnimInstance.h"

class USkeletalMeshComponent;

bool UEnemyAnimInstance::IsSlotPlayingAnyAnimation(FName SlotNodeName) const {
    return false;
}

bool UEnemyAnimInstance::IsNotAttacking() const {
    return false;
}

bool UEnemyAnimInstance::IsDead() const {
    return false;
}

USkeletalMeshComponent* UEnemyAnimInstance::GetSkeletalMesh() const {
    return NULL;
}

UEnemyAnimInstance::UEnemyAnimInstance() {
    this->IsAttacking = false;
    this->IsAlive = true;
    this->RandomStartPosition = 0.78f;
    this->HealthComponent = NULL;
}

