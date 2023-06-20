#include "SpiderLobberAnimInstance.h"

void USpiderLobberAnimInstance::SetAttackIndex(int32 Index) {
}

void USpiderLobberAnimInstance::ResetLiquidInBum() {
}

void USpiderLobberAnimInstance::OnDeath(UHealthComponentBase* InHealthComponent) {
}

USpiderLobberAnimInstance::USpiderLobberAnimInstance() {
    this->LiquidInBumEaseInExp = 2.00f;
    this->LiquidInBumTimeToMax = 5.00f;
    this->LiquidInBumTimeToMaxShort = 0.70f;
}

