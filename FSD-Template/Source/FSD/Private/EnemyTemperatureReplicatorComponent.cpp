#include "EnemyTemperatureReplicatorComponent.h"
#include "Net/UnrealNetwork.h"

void UEnemyTemperatureReplicatorComponent::OnRep_TemperatureEffect() {
}

void UEnemyTemperatureReplicatorComponent::OnRep_IsOnFire() {
}

void UEnemyTemperatureReplicatorComponent::OnRep_IsFrozen() {
}

bool UEnemyTemperatureReplicatorComponent::IsOnFire() const {
    return false;
}

bool UEnemyTemperatureReplicatorComponent::IsFrozen() const {
    return false;
}

float UEnemyTemperatureReplicatorComponent::GetTemperatureEffect() const {
    return 0.0f;
}

void UEnemyTemperatureReplicatorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEnemyTemperatureReplicatorComponent, TemperatureEffect);
    DOREPLIFETIME(UEnemyTemperatureReplicatorComponent, bIsFrozen);
    DOREPLIFETIME(UEnemyTemperatureReplicatorComponent, bIsOnFire);
}

UEnemyTemperatureReplicatorComponent::UEnemyTemperatureReplicatorComponent() {
    this->TemperatureEffect = 0;
    this->bIsFrozen = false;
    this->bIsOnFire = false;
}

