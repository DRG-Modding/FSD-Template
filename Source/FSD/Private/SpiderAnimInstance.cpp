#include "SpiderAnimInstance.h"

void USpiderAnimInstance::SetMeshScale(float newScale) {
}

void USpiderAnimInstance::SetDeathAnimationCategory(ESpiderDeathAnimationCategory Category) {
}


void USpiderAnimInstance::PlayForcedCycle(float Duration) {
}

bool USpiderAnimInstance::IsNotStrafing() const {
    return false;
}

bool USpiderAnimInstance::IsNotStaggered() const {
    return false;
}

bool USpiderAnimInstance::IsNotMoving() const {
    return false;
}

bool USpiderAnimInstance::IsNotFrozen() const {
    return false;
}

bool USpiderAnimInstance::IsNotAirborne() const {
    return false;
}

USpiderAnimInstance::USpiderAnimInstance() {
    this->Speed = 0.00f;
    this->WalkCycleSpeed = 200.00f;
    this->StartMovingSpeed = 50.00f;
    this->StopMovingSpeed = 10.00f;
    this->WalkCycleMinRate = 0.30f;
    this->WalkCyclePlayRate = 0.00f;
    this->MeshScale = 1.00f;
    this->Direction = 0.00f;
    this->PathDirectionLerpSpeedIn = 5.00f;
    this->PathDirectionLerpSpeedOut = 1.00f;
    this->PathDirection = 0.00f;
    this->HorizontalAngularSpeed = 0.00f;
    this->HorizontalAngularSpeed_Abs = 0.00f;
    this->VerticalAngularSpeed = 0.00f;
    this->MoveDirection = EMoveDirection::None;
    this->IsMoving = false;
    this->IsStrafing = false;
    this->IsMovingAndStrafing = false;
    this->IsFrozen = false;
    this->IsStaggered = false;
    this->StaggerStrength = 1.00f;
    this->IsAirborne = false;
    this->FootstepParticle = NULL;
    this->FootstepSound = NULL;
    this->FootStepParticleCullDistance = 1000.00f;
    this->RandomWalkCycleIndex = 0;
    this->TurnToIdle = false;
    this->IdleToTurnLeft = false;
    this->IdleToTurnRight = false;
    this->TurnToWalk = false;
    this->WalkToTurnRight = false;
    this->WalkToTurnLeft = false;
    this->IsInFakePhysics = false;
    this->DeathAnimationCategory = ESpiderDeathAnimationCategory::NoAnimation;
}

