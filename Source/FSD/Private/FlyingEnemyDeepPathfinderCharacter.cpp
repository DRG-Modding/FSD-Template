#include "FlyingEnemyDeepPathfinderCharacter.h"

AFlyingEnemyDeepPathfinderCharacter::AFlyingEnemyDeepPathfinderCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FrozenMaterial = NULL;
    this->FrozenAsset = NULL;
    this->FrozenDeathSound = NULL;
    this->FrozenDeathparticles = NULL;
}

void AFlyingEnemyDeepPathfinderCharacter::TriggerFrozenRagdoll() {
}

void AFlyingEnemyDeepPathfinderCharacter::OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}



