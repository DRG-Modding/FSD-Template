#include "JettyBootUsableComponent.h"

bool UJettyBootUsableComponent::DeductCredits(APlayerCharacter* User, UMissionStat* InCreditCounter) {
    return false;
}

UJettyBootUsableComponent::UJettyBootUsableComponent() {
    this->CreditPrice = 5;
}

