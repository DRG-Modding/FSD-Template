#include "PawnAlertComponent.h"

class APawn;

void UPawnAlertComponent::StopAutoAlerting() {
}

void UPawnAlertComponent::OnPawnSeen(APawn* Pawn) {
}

void UPawnAlertComponent::OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost) {
}

void UPawnAlertComponent::OnAlerted() {
}

void UPawnAlertComponent::AleartNearby() {
}

UPawnAlertComponent::UPawnAlertComponent() {
    this->AutoAlertAI = true;
    this->ShouldAlertNearby = false;
    this->AlertRadius = 1000.00f;
}

