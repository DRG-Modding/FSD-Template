#include "ExtruderPlant.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/AudioComponent.h"

AExtruderPlant::AExtruderPlant() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->ExtrudeAnimation = NULL;
    this->RetractAnimation = NULL;
    this->audio = CreateDefaultSubobject<UAudioComponent>(TEXT("audio"));
}

