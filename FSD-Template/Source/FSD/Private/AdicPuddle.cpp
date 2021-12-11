#include "AdicPuddle.h"

class UPrimitiveComponent;
class AActor;

void AAdicPuddle::OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAdicPuddle::OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AAdicPuddle::AAdicPuddle() {
    this->SpawnSound = NULL;
    this->InflictedStatusEffect = NULL;
    this->LifeTime = 0.00f;
}

