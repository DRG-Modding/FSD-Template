#include "PawnAlertComponent.h"

UPawnAlertComponent::UPawnAlertComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoAlertAI = true;
    this->ShouldAlertNearby = false;
    this->AlertRadius = 1000.00f;
}

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


