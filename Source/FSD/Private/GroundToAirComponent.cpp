#include "GroundToAirComponent.h"
#include "Net/UnrealNetwork.h"

void UGroundToAirComponent::SetIsFlying(bool aIsFlying) {
}

void UGroundToAirComponent::SetAllowedToChangeState(bool aIsAllowed) {
}

void UGroundToAirComponent::OnRep_StateChange() {
}

bool UGroundToAirComponent::GetIsWalking() const {
    return false;
}

bool UGroundToAirComponent::GetIsFlying() const {
    return false;
}

void UGroundToAirComponent::Engage() {
}

void UGroundToAirComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGroundToAirComponent, IsFlying);
}

UGroundToAirComponent::UGroundToAirComponent() {
    this->CurrentMove = NULL;
    this->WalkTime = 0.00f;
    this->WalkTimeMaxRandomOffset = 0.00f;
    this->WalkTimeMinRandomOffset = 0.00f;
    this->WalkUseTimer = true;
    this->FlyTime = 0.00f;
    this->FlyTimeMaxRandomOffset = 0.00f;
    this->FlyTimeMinRandomOffset = 0.00f;
    this->FlyUseTimer = true;
    this->IsFlying = false;
}

