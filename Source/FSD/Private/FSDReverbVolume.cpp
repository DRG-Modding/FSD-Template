#include "FSDReverbVolume.h"
#include "Components/SphereComponent.h"

AFSDReverbVolume::AFSDReverbVolume() {
    this->Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    this->Reverb = NULL;
    this->Priority = 0.00f;
}

