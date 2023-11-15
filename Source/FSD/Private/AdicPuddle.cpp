#include "AdicPuddle.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

AAdicPuddle::AAdicPuddle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SphereTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("SphereTrigger"));
    this->SpawnSound = NULL;
    this->InflictedStatusEffect = NULL;
    this->LifeTime = 0.00f;
    this->SphereTrigger->SetupAttachment(RootComponent);
}


void AAdicPuddle::OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAdicPuddle::OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


