#include "AutoShotgun.h"

class AActor;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;

void AAutoShotgun::OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial, bool wasDirectHit) {
}

void AAutoShotgun::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}

AAutoShotgun::AAutoShotgun() {
    this->CQCKillBuff = NULL;
}

