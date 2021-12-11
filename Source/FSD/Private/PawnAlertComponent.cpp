#include "PawnAlertComponent.h"

class UDamageClass;
class APawn;
class AActor;

void UPawnAlertComponent::StopAutoAlerting() {
}

void UPawnAlertComponent::OnPawnSeen(APawn* Pawn) {
}

void UPawnAlertComponent::OnHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost) {
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

