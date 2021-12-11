#include "JetPackItem.h"
#include "Net/UnrealNetwork.h"

void AJetPackItem::Server_StopThruster_Implementation() {
}
bool AJetPackItem::Server_StopThruster_Validate() {
    return true;
}

void AJetPackItem::Server_StartThruster_Implementation() {
}
bool AJetPackItem::Server_StartThruster_Validate() {
    return true;
}

void AJetPackItem::OnRep_Fuel(float OldFuel) {
}



void AJetPackItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AJetPackItem, Fuel);
    DOREPLIFETIME(AJetPackItem, Active);
}

AJetPackItem::AJetPackItem() {
    this->ActiveTime = 0.00f;
    this->VerticalAccelerationCurve = NULL;
    this->VerticalAcceleration = 25.00f;
    this->MaxVerticalSpeed = 300.00f;
    this->MaxHorizontalSpeed = 300.00f;
    this->MaxHorizontalDrift = 15.00f;
    this->BurnDuration = 5.00f;
    this->RechargeDuration = 10.00f;
    this->Fuel = 1.00f;
    this->Active = false;
    this->CharacterMovement = NULL;
}

