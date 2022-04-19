#include "AssaultRifle.h"

class AActor;
class UFSDPhysicalMaterial;

void AAssaultRifle::OnTimerElapsed() {
}

void AAssaultRifle::OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit) {
}

void AAssaultRifle::Client_ResetAccuracy_Implementation() {
}

AAssaultRifle::AAssaultRifle() {
    this->KillsResetAccuracyDuration = 0.00f;
    this->KillsTriggersStatusEffect = false;
    this->KillTriggeredStatusEffect = NULL;
}

