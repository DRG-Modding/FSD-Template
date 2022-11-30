#include "HangingFireCracker.h"
#include "Components/SkeletalMeshComponent.h"
#include "InstantUsable.h"

void AHangingFireCracker::SetFireToCracker(const FVector& HitPos) {
}

AHangingFireCracker::AHangingFireCracker() {
    this->Usable = CreateDefaultSubobject<UInstantUsable>(TEXT("Usable"));
    this->SKMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Root"));
}

