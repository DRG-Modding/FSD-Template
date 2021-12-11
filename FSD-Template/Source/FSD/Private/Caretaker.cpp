#include "Caretaker.h"
#include "Net/UnrealNetwork.h"

class UCaretakerActionComponent;

void ACaretaker::WakeUp() {
}

void ACaretaker::SetTargetRotationRate(int32 rateIndex) {
}

void ACaretaker::OpenRandomEye(bool forbidLastEye) {
}


void ACaretaker::OnRep_OpenEye() {
}

void ACaretaker::OnRep_CurrentStage() {
}

void ACaretaker::OnRep_CurrentRotation() {
}




void ACaretaker::OnDamageTaken(float Amount) {
}

bool ACaretaker::IsAwake() const {
    return false;
}

bool ACaretaker::IsAnyEyeOpen() const {
    return false;
}

void ACaretaker::InitiateNextStage() {
}

void ACaretaker::InitCaretakerActions(TArray<UCaretakerActionComponent*> carettakeractions) {
}

void ACaretaker::CloseAllEyes() {
}

void ACaretaker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACaretaker, CurrentStage);
    DOREPLIFETIME(ACaretaker, Server_Rotation);
    DOREPLIFETIME(ACaretaker, OpenEye);
}

ACaretaker::ACaretaker() {
    this->Eyes.AddDefaulted(4);
    this->subHealth.AddDefaulted(4);
    this->CurrentAction = NULL;
    this->CurrentStage = -1;
    this->RotationRates.AddDefaulted(5);
    this->Server_Rotation = 0.00f;
    this->IsInStageCooldown = false;
    this->IsWeakpointAVisible = false;
    this->IsWeakpointBVisible = false;
    this->IsWeakpointCVisible = false;
    this->IsWeakpointDVisible = false;
    this->ActiveSpawnType = ECaretakerSpawnType::None;
    this->AoEStage = 0;
    this->OpenEye = -1;
}

