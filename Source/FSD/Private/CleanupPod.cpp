#include "CleanupPod.h"
#include "Components/SphereComponent.h"


void ACleanupPod::ChangedState(ARessuplyPod* InPod, ERessuplyPodState InState) {
}

ACleanupPod::ACleanupPod() {
    this->RemovePlagueCollision = CreateDefaultSubobject<USphereComponent>(TEXT("RemovePlague"));
}

