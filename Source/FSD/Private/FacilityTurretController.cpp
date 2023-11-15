#include "FacilityTurretController.h"
#include "Perception/AIPerceptionComponent.h"

AFacilityTurretController::AFacilityTurretController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
    this->RememberTargetTime = 0.00f;
    this->RetargetOnAttackChance = 0.00f;
    this->RespectAttack = true;
}

void AFacilityTurretController::OnTurretsAttackingChanged(bool IsAttacking) {
}

void AFacilityTurretController::OnTargetRevived() {
}

void AFacilityTurretController::OnTargetDied(UHealthComponentBase* Health) {
}

void AFacilityTurretController::OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus) {
}


