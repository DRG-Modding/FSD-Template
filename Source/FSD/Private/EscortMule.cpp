#include "EscortMule.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;
class UInstantUsable;

bool AEscortMule::TryHeal(APlayerCharacter* User, float Amount) {
    return false;
}

void AEscortMule::SetTargetTransform(FTransform InTransform) {
}

void AEscortMule::SetSpeedModifier(float inSpeedModifier) {
}

void AEscortMule::SetFullExtracterAttached(UInstantUsable* Usable) {
}

void AEscortMule::SetExtractorDetached(UInstantUsable* Usable) {
}

void AEscortMule::SetExitGaragePath(const TArray<FVector> Path) {
}

void AEscortMule::ResetExtractors() {
}


void AEscortMule::OnRep_SpeedModifier() {
}

void AEscortMule::OnRep_MovementState() {
}


void AEscortMule::OnRep_ExtractorSlots() {
}




void AEscortMule::ObjectiveStateChange_Implementation(EEscortMissionState NewState) {
}

EEscortExtractorState AEscortMule::GetExtractorState(UInstantUsable* Usable) const {
    return EEscortExtractorState::ReadyToGrab;
}

void AEscortMule::ActivateMule() {
}

void AEscortMule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEscortMule, MovementState);
    DOREPLIFETIME(AEscortMule, SpeedModifier);
    DOREPLIFETIME(AEscortMule, CannisterVisible_Left);
    DOREPLIFETIME(AEscortMule, CannisterVisible_Right);
    DOREPLIFETIME(AEscortMule, NextStop);
    DOREPLIFETIME(AEscortMule, IsCarvingTunnel);
    DOREPLIFETIME(AEscortMule, ExtractorSlots);
}

AEscortMule::AEscortMule() {
    this->SpeedModifier = 1.00f;
    this->HealPerTickNormal = 0.00f;
    this->HealPerTickUnderAttack = 0.00f;
    this->CannisterVisible_Left = false;
    this->CannisterVisible_Right = false;
    this->IsCarvingTunnel = false;
    this->FullCanisters = 0;
}

