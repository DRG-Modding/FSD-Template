#include "TemporaryBuff.h"

UTemporaryBuff::UTemporaryBuff() {
    this->ActivatesOnlyOnceWhenDrinking = false;
    this->IsTodaysSpecialBuff = true;
}

bool UTemporaryBuff::GetActivateOnlyWhenDrinking() const {
    return false;
}

void UTemporaryBuff::DeActivateBuff(APlayerCharacter* Player) const {
}

void UTemporaryBuff::ActivateBuff(APlayerCharacter* Player) const {
}


