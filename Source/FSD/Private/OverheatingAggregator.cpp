#include "OverheatingAggregator.h"
#include "Net/UnrealNetwork.h"

void UOverheatingAggregator::Server_SetTemperature_Implementation(float NewTemperature) {
}
bool UOverheatingAggregator::Server_SetTemperature_Validate(float NewTemperature) {
    return true;
}

void UOverheatingAggregator::Server_SetIsOverheated_Implementation(bool NewOverheated) {
}
bool UOverheatingAggregator::Server_SetIsOverheated_Validate(bool NewOverheated) {
    return true;
}

void UOverheatingAggregator::OnRep_Temperature() {
}

void UOverheatingAggregator::OnRep_IsOverheated() {
}

float UOverheatingAggregator::GetTemperature() const {
    return 0.0f;
}

float UOverheatingAggregator::GetOverheatingProgress() const {
    return 0.0f;
}

bool UOverheatingAggregator::GetIsOverheated() const {
    return false;
}

void UOverheatingAggregator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOverheatingAggregator, HeatLossPerSecond);
    DOREPLIFETIME(UOverheatingAggregator, OverheatedDuration);
    DOREPLIFETIME(UOverheatingAggregator, bIsOverheated);
    DOREPLIFETIME(UOverheatingAggregator, Temperature);
}

UOverheatingAggregator::UOverheatingAggregator() {
    this->HeatLossPerSecond = 10.00f;
    this->OverheatedDuration = 2.00f;
    this->bIsOverheated = false;
    this->Temperature = 0.00f;
}

