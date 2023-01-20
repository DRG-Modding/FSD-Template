#include "ExtruderPlant.h"
#include "Components/AudioComponent.h"
#include "Components/SkeletalMeshComponent.h"

AExtruderPlant::AExtruderPlant() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->ExtrudeAnimation = NULL;
    this->RetractAnimation = NULL;
    this->audio = CreateDefaultSubobject<UAudioComponent>(TEXT("audio"));
}

