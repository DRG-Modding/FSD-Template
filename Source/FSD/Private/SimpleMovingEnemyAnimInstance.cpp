#include "SimpleMovingEnemyAnimInstance.h"

void USimpleMovingEnemyAnimInstance::SetMeshScale(float newScale) {
}

bool USimpleMovingEnemyAnimInstance::IsNotMoving() const {
    return false;
}

USimpleMovingEnemyAnimInstance::USimpleMovingEnemyAnimInstance() {
    this->Speed = 0.00f;
    this->WalkCycleSpeed = 200.00f;
    this->StartMovingSpeed = 50.00f;
    this->StopMovingSpeed = 10.00f;
    this->WalkCycleMinRate = 0.30f;
    this->WalkCyclePlayRate = 0.00f;
    this->MeshScale = 1.00f;
    this->IsMoving = false;
}

