#include "CleanupPod.h"
#include "Components/SphereComponent.h"

ACleanupPod::ACleanupPod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RemovePlagueCollision = CreateDefaultSubobject<USphereComponent>(TEXT("RemovePlague"));
    this->RemovePlagueCollision->SetupAttachment(RootComponent);
}


void ACleanupPod::ChangedState(ARessuplyPod* InPod, ERessuplyPodState InState) {
}


