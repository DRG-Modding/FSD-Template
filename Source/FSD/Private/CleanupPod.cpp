#include "CleanupPod.h"
#include "Components/SphereComponent.h"

class ARessuplyPod;


void ACleanupPod::ChangedState(ARessuplyPod* InPod, ERessuplyPodState InState) {
}

ACleanupPod::ACleanupPod() {
    this->RemovePlagueCollision = CreateDefaultSubobject<USphereComponent>(TEXT("RemovePlague"));
}

