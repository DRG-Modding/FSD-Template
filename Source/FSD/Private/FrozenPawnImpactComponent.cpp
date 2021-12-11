#include "FrozenPawnImpactComponent.h"

class UPrimitiveComponent;
class AActor;

void UFrozenPawnImpactComponent::TriggerFrozenRagdoll() {
}

void UFrozenPawnImpactComponent::OnFrozen(bool frozen) {
}

void UFrozenPawnImpactComponent::OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

UFrozenPawnImpactComponent::UFrozenPawnImpactComponent() {
    this->FrozenMaterial = NULL;
    this->FrozenAsset = NULL;
    this->FrozenDeathSound = NULL;
    this->FrozenDeathparticles = NULL;
}

