#include "FacilityTurret.h"
#include "Net/UnrealNetwork.h"

void AFacilityTurret::SetIsAttacking(bool IsAttacking) {
}

void AFacilityTurret::OnRep_TurretEngaged() {
}




FRotator AFacilityTurret::GetLookingDirection() const {
    return FRotator{};
}

void AFacilityTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFacilityTurret, CurrentTarget);
    DOREPLIFETIME(AFacilityTurret, TurretEngaged);
}

AFacilityTurret::AFacilityTurret() {
    this->IndicatorActivationDelay = 2.00f;
    this->FinishAttackIgnoreLoS = false;
    this->InvulnerableOnInactive = true;
    this->FoldOutTime = 1.67f;
    this->EngagedAudio = NULL;
    this->Offset = 0.00f;
    this->AimAcceleration = 0.00f;
    this->CurrentTarget = NULL;
    this->TurretEngaged = false;
    this->AlwaysActive = false;
}

