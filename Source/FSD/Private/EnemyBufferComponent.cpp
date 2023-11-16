#include "EnemyBufferComponent.h"
#include "Net/UnrealNetwork.h"

UEnemyBufferComponent::UEnemyBufferComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffect = NULL;
    this->Particles = NULL;
    this->ParticleTangentSize = 60.00f;
    this->BuffRadius = 500.00f;
    this->MaxBuffedTargets = 5;
    this->SubclassBuffQuery = NULL;
}

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


