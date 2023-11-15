#include "AutoShotgun.h"

AAutoShotgun::AAutoShotgun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CQCKillBuff = NULL;
}

void AAutoShotgun::OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial, bool wasDirectHit) {
}

void AAutoShotgun::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}


