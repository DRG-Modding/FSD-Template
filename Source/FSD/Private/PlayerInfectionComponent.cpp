#include "PlayerInfectionComponent.h"
#include "Net/UnrealNetwork.h"

void UPlayerInfectionComponent::Server_ClearInfection_Implementation() {
}

void UPlayerInfectionComponent::OnRep_InfectionLevel(float oldLevel) {
}

void UPlayerInfectionComponent::IncreaseInfection(float Amount, AActor* Source) {
}

void UPlayerInfectionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerInfectionComponent, InfectionLevel);
}

UPlayerInfectionComponent::UPlayerInfectionComponent() {
    this->InfectionState = EInfectionState::Normal;
    this->ReductionCooldown = 0.00f;
    this->InfectionImmunityAfterFullInfection = 0.00f;
    this->InfectionLevel = 0.00f;
    this->BreakoutPercentage = 0.00f;
    this->InfectionDecreaseOverTimer = 0.00f;
}

