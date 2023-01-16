#include "FlyingEnemyDeepPathfinderCharacter.h"

class AActor;
class UPrimitiveComponent;

void AFlyingEnemyDeepPathfinderCharacter::TriggerFrozenRagdoll() {
}

void AFlyingEnemyDeepPathfinderCharacter::OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


AFlyingEnemyDeepPathfinderCharacter::AFlyingEnemyDeepPathfinderCharacter() {
    this->FrozenMaterial = NULL;
    this->FrozenAsset = NULL;
    this->FrozenDeathSound = NULL;
    this->FrozenDeathparticles = NULL;
}

