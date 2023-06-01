#include "DroneStream.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"


void ADroneStream::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ADroneStream::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ABosco* ADroneStream::GetBosco() const {
    return NULL;
}

ADroneStream::ADroneStream() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
    this->CheckStartOverlaps = true;
    this->CheckEndOverlaps = false;
}

