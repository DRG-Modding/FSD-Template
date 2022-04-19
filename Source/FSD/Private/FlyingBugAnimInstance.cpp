#include "FlyingBugAnimInstance.h"

void UFlyingBugAnimInstance::SetDeathAnimation(EFlyingBugDeathAnimationCategory deathAnim) {
}

bool UFlyingBugAnimInstance::IsNotStaggered() const {
    return false;
}

bool UFlyingBugAnimInstance::IsNotInAttackMode() const {
    return false;
}

UFlyingBugAnimInstance::UFlyingBugAnimInstance() {
    this->IsInAttackMode = false;
    this->IsStaggered = false;
    this->DeathAnimationCategory = EFlyingBugDeathAnimationCategory::NoAnimation;
}

