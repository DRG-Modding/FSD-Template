#include "EnemyBufferComponent.h"
#include "Net/UnrealNetwork.h"

class UHealthComponentBase;

void UEnemyBufferComponent::SetBuffingEnabled(bool Enabled) {
}

void UEnemyBufferComponent::OnPawnDied(UHealthComponentBase* Health) {
}

void UEnemyBufferComponent::OnOwnerDied(UHealthComponentBase* Health) {
}

void UEnemyBufferComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEnemyBufferComponent, BuffTargets);
}

UEnemyBufferComponent::UEnemyBufferComponent() {
    this->StatusEffect = NULL;
    this->Particles = NULL;
    this->ParticleTangentSize = 60.00f;
    this->BuffRadius = 500.00f;
    this->MaxBuffedTargets = 5;
}

