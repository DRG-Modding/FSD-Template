#include "InfectionMasterComponent.h"
#include "Net/UnrealNetwork.h"

void UInfectionMasterComponent::OnRep_RandomSeed() {
}

void UInfectionMasterComponent::OnDeath(UHealthComponentBase* enemy) {
}

void UInfectionMasterComponent::InfectionPointDestroyed(FName Name) {
}

void UInfectionMasterComponent::DealWeakpointDamage(const FName& SocketName) {
}

void UInfectionMasterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInfectionMasterComponent, InfectionPoints);
    DOREPLIFETIME(UInfectionMasterComponent, RandomSeed);
}

UInfectionMasterComponent::UInfectionMasterComponent() {
    this->WeakpointPopSTE = NULL;
    this->WeakpointPopSTERange = 300.00f;
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

