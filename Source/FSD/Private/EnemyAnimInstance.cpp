#include "EnemyAnimInstance.h"

UEnemyAnimInstance::UEnemyAnimInstance() {
    this->IsAttacking = false;
    this->IKBlend = 0.00f;
    this->IKEnabled = false;
    this->IsAlive = true;
    this->RandomStartPosition = 0.78f;
    this->HealthComponent = NULL;
    this->IKComponent = NULL;
    this->PoseCorrectionComponent = NULL;
}

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

FEndEffector UEnemyAnimInstance::GetEndEffector1() {
    return FEndEffector{};
}

FEndEffector UEnemyAnimInstance::GetEndEffector0() {
    return FEndEffector{};
}


