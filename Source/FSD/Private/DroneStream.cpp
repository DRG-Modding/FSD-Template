#include "DroneStream.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"

ADroneStream::ADroneStream(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
    this->CheckStartOverlaps = true;
    this->CheckEndOverlaps = false;
    this->Collision->SetupAttachment(RootComponent);
}


void ADroneStream::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ADroneStream::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ABosco* ADroneStream::GetBosco() const {
    return NULL;
}


