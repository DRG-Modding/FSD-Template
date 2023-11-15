#include "JettyBootUsableComponent.h"

UJettyBootUsableComponent::UJettyBootUsableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CreditPrice = 5;
}

bool UJettyBootUsableComponent::DeductCredits(APlayerCharacter* User, UMissionStat* InCreditCounter) {
    return false;
}


