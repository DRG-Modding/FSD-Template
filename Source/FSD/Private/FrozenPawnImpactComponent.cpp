#include "FrozenPawnImpactComponent.h"

UFrozenPawnImpactComponent::UFrozenPawnImpactComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FrozenMaterial = NULL;
    this->FrozenAsset = NULL;
    this->FrozenDeathSound = NULL;
    this->FrozenDeathparticles = NULL;
}

void UFrozenPawnImpactComponent::TriggerFrozenRagdoll() {
}

void UFrozenPawnImpactComponent::OnFrozen(bool frozen) {
}

void UFrozenPawnImpactComponent::OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


