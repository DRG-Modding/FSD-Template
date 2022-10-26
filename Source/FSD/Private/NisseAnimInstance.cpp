#include "NisseAnimInstance.h"

bool UNisseAnimInstance::IsWalking() const {
    return false;
}

bool UNisseAnimInstance::IsRunning() const {
    return false;
}

bool UNisseAnimInstance::IsNotWalking() const {
    return false;
}

bool UNisseAnimInstance::IsNotRunning() const {
    return false;
}

bool UNisseAnimInstance::IsNotIdle() const {
    return false;
}

bool UNisseAnimInstance::IsNotFrozen() const {
    return false;
}

bool UNisseAnimInstance::IsIdle() const {
    return false;
}

bool UNisseAnimInstance::IsFrozen() const {
    return false;
}

UNisseAnimInstance::UNisseAnimInstance() {
    this->State = ENisseState::Idle;
}

