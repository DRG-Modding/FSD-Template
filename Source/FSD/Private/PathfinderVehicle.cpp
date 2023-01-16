#include "PathfinderVehicle.h"
#include "Components/SkeletalMeshComponent.h"
#include "DeepPathfinderMovement.h"
#include "HealthComponent.h"

APathfinderVehicle::APathfinderVehicle() {
    this->PathfinderMovement = CreateDefaultSubobject<UDeepPathfinderMovement>(TEXT("PathfinderMovement"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));
    this->Speed = 10.00f;
}

