#include "StatusEffectTriggerComponent.h"

UStatusEffectTriggerComponent::UStatusEffectTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->collider = NULL;
    this->RemoveStatusEffectOnEndOverlap = true;
}

void UStatusEffectTriggerComponent::OnOverlapEnd(AActor* MyActor, AActor* OtherActor) {
}

void UStatusEffectTriggerComponent::OnOverlapBegin(AActor* MyActor, AActor* OtherActor) {
}

void UStatusEffectTriggerComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UStatusEffectTriggerComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UStatusEffectTriggerComponent::AddActorToIgnoreList(AActor* Actor) {
}


