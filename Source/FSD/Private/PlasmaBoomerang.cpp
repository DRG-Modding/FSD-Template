#include "PlasmaBoomerang.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DamageComponent.h"

void APlasmaBoomerang::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

APlasmaBoomerang::APlasmaBoomerang() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->MeshPivot = CreateDefaultSubobject<USceneComponent>(TEXT("MeshPivot"));
    this->ArcCurve = NULL;
    this->StartSmoothTime = 1.00f;
    this->RotationSpeed = 1750.00f;
    this->ArcSpeed = 1.25f;
    this->HomingAcceleration = 1.25f;
    this->IsHoming = false;
}

