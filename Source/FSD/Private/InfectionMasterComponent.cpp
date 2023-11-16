#include "InfectionMasterComponent.h"
#include "Net/UnrealNetwork.h"

UInfectionMasterComponent::UInfectionMasterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeakpointPopSTE = NULL;
    this->WeakpointPopSTERange = 250.00f;
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


