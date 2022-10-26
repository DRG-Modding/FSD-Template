#include "InfectionMasterComponent.h"
#include "Net/UnrealNetwork.h"

class UHealthComponentBase;

void UInfectionMasterComponent::OnRep_RandomSeed() {
}

void UInfectionMasterComponent::OnDeath(UHealthComponentBase* enemy) {
}

void UInfectionMasterComponent::DealWeakpointDamage() {
}

void UInfectionMasterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInfectionMasterComponent, InfectionPoints);
    DOREPLIFETIME(UInfectionMasterComponent, RandomSeed);
}

UInfectionMasterComponent::UInfectionMasterComponent() {
    this->InfectionPoints = 3;
    this->ExtraInfectionPointsWithMorePlayers = false;
    this->SpikeScale = 1.00f;
    this->InfectionScale = 1.00f;
    this->KillWhenAllPointsDestroyed = false;
    this->ScaleDownOnDeathTime = 3.00f;
    this->BaseMat = NULL;
    this->GlowMat = NULL;
    this->HealthComponent = NULL;
    this->RandomSeed = 0;
}

