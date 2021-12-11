#include "AutoShotgun.h"

class AActor;
class UHealthComponentBase;
class UFSDPhysicalMaterial;
class UPrimitiveComponent;

void AAutoShotgun::OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial) {
}

void AAutoShotgun::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}

AAutoShotgun::AAutoShotgun() {
    this->CQCKillBuff = NULL;
}

