#include "AssaultRifle.h"

AAssaultRifle::AAssaultRifle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KillsResetAccuracyDuration = 0.00f;
    this->KillsTriggersStatusEffect = false;
    this->KillTriggeredStatusEffect = NULL;
}

void AAssaultRifle::OnTimerElapsed() {
}

void AAssaultRifle::OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit) {
}

void AAssaultRifle::Client_ResetAccuracy_Implementation() {
}


