#include "BasicThrowableItem.h"

class APlayerCharacter;
class UPrimitiveComponent;
class AActor;

void ABasicThrowableItem::ThrowItem(const FVector& throwForce) {
}

void ABasicThrowableItem::ResetImpactSound() {
}

void ABasicThrowableItem::OnUsed(APlayerCharacter* User, EInputKeys Key) {
}

void ABasicThrowableItem::OnUsableChanged(bool CanUse) {
}

void ABasicThrowableItem::OnPickedUp() {
}

void ABasicThrowableItem::OnDropped() {
}

void ABasicThrowableItem::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

ABasicThrowableItem::ABasicThrowableItem() {
    this->ImpactSound = NULL;
    this->SquaredMinImpactForce = 100.00f;
    this->ImpactAudioResetTime = 0.20f;
    this->SquaredMinThrowforce = 10.00f;
}

