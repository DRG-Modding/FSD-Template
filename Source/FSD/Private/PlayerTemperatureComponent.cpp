#include "PlayerTemperatureComponent.h"
#include "Net/UnrealNetwork.h"

class UHealthComponentBase;

void UPlayerTemperatureComponent::SetNormalTemperature() {
}

void UPlayerTemperatureComponent::SetFrozenTemperature() {
}

void UPlayerTemperatureComponent::OnRep_TemperatureState(EPlayerTemperatureState oldState) {
}

void UPlayerTemperatureComponent::OnRep_TemperatureChangeSpeed(int8 OldSpeed) {
}

void UPlayerTemperatureComponent::OnRep_DefrostProgress() {
}

void UPlayerTemperatureComponent::OnRep_CurrentTemperature(float OldTemperature) {
}

void UPlayerTemperatureComponent::OnDeath(UHealthComponentBase* Health) {
}

int32 UPlayerTemperatureComponent::GetTemperatureChangedSpeed() const {
    return 0;
}

float UPlayerTemperatureComponent::GetDefrostProgress() const {
    return 0.0f;
}

float UPlayerTemperatureComponent::GetCurrentTemperatureNormalized() const {
    return 0.0f;
}

void UPlayerTemperatureComponent::Defrost(float Amount) {
}

void UPlayerTemperatureComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerTemperatureComponent, CurrentTemperature);
    DOREPLIFETIME(UPlayerTemperatureComponent, TargetTemperature);
    DOREPLIFETIME(UPlayerTemperatureComponent, TemperatureChangeSpeed);
    DOREPLIFETIME(UPlayerTemperatureComponent, DefrostProgress);
    DOREPLIFETIME(UPlayerTemperatureComponent, TemperatureState);
}

UPlayerTemperatureComponent::UPlayerTemperatureComponent() {
    this->MinimumTemperature = -100.00f;
    this->MaximumTemperature = 100.00f;
    this->DefrostTemperature = -50.00f;
    this->BurnTemperature = 51.00f;
    this->DouseFireTemperature = 50.00f;
    this->TemperaturRegainSpeed = 5.00f;
    this->DefrostingRequired = 50.00f;
    this->OnDefrostedStatusEffect = NULL;
    this->NormalTemperature = 0.00f;
    this->CurrentTemperature = 0.00f;
    this->TargetTemperature = 0.00f;
    this->TemperatureChangeSpeed = 0;
    this->DefrostProgress = 0.00f;
    this->barVisible = false;
    this->Character = NULL;
    this->TemperatureState = EPlayerTemperatureState::Normal;
}

