#include "FacilityTurretController.h"

class UHealthComponentBase;
class AActor;

void AFacilityTurretController::OnTurretsAttackingChanged(bool IsAttacking) {
}

void AFacilityTurretController::OnTargetRevived() {
}

void AFacilityTurretController::OnTargetDied(UHealthComponentBase* Health) {
}

void AFacilityTurretController::OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus) {
}

AFacilityTurretController::AFacilityTurretController() {
    this->RememberTargetTime = 0.00f;
    this->RetargetOnAttackChance = 0.00f;
    this->RespectAttack = true;
}

