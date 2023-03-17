#include "PlagueCleanupItem.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "CrosshairAggregator.h"
#include "InstantUsable.h"
#include "KeepInsideWorld.h"

void APlagueCleanupItem::Server_Gunsling_Implementation() {
}

void APlagueCleanupItem::Server_EnablePhysics_Implementation(const FVector_NetQuantize& Direction) {
}

void APlagueCleanupItem::OnPickupUsed(APlayerCharacter* User, EInputKeys Key) {
}



void APlagueCleanupItem::All_Gunsling_Implementation() {
}

void APlagueCleanupItem::All_EnablePhysics_Implementation(const FVector_NetQuantize& Direction) {
}

APlagueCleanupItem::APlagueCleanupItem() {
    this->DroppedCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
    this->PickupUsable = CreateDefaultSubobject<UInstantUsable>(TEXT("PickupUsable"));
    this->UseSphere = CreateDefaultSubobject<USphereComponent>(TEXT("UseSphere"));
    this->CrosshairAggregator = CreateDefaultSubobject<UCrosshairAggregator>(TEXT("Crosshair"));
    this->FP_FireAnimation = NULL;
    this->TP_FireAnimation = NULL;
    this->FP_Gunsling = NULL;
    this->TP_Gunsling = NULL;
    this->Item_Gunsling = NULL;
    this->UsingSound = NULL;
    this->UsingSoundFadeout = 0.30f;
    this->UsingSoundTail = NULL;
    this->KeepInsideWorld = CreateDefaultSubobject<UKeepInsideWorld>(TEXT("KeepInWorld"));
    this->UsingSoundInstance = NULL;
    this->FireRate = 1.00f;
}

