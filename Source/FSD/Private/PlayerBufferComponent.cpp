#include "PlayerBufferComponent.h"
#include "Net/UnrealNetwork.h"

void UPlayerBufferComponent::SetBuffingEnabled(bool Enabled) {
}

void UPlayerBufferComponent::ReducePushAmount() {
}

void UPlayerBufferComponent::OnPawnDied(UHealthComponentBase* Health) {
}

void UPlayerBufferComponent::OnOwnerDied(UHealthComponentBase* Health) {
}

void UPlayerBufferComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerBufferComponent, BuffTargets);
}

UPlayerBufferComponent::UPlayerBufferComponent() {
    this->StatusEffect = NULL;
    this->ManualMeshReference = NULL;
    this->Particles = NULL;
    this->ParticleTangentSize = 60.00f;
    this->BuffRadius = 500.00f;
    this->MaxBuffedTargets = 5;
    this->PushAmount = 1;
}

