#include "AutoShotgun.h"

class UHealthComponentBase;
class UFSDPhysicalMaterial;
class AActor;
class UPrimitiveComponent;

void AAutoShotgun::OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial, bool wasDirectHit) {
}

void AAutoShotgun::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}

AAutoShotgun::AAutoShotgun() {
    this->CQCKillBuff = NULL;
}

