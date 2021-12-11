#include "PlayerTriggerComponent.h"

class UPrimitiveComponent;
class AActor;

void UPlayerTriggerComponent::SetCollider(UPrimitiveComponent* NewCollider) {
}

void UPlayerTriggerComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPlayerTriggerComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UPlayerTriggerComponent::UPlayerTriggerComponent() {
    this->collider = NULL;
}

