#include "TentacleBusyComponent.h"

UTentacleBusyComponent::UTentacleBusyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UTentacleBusyComponent::ReleasedActor(AActor* Escape, bool fullGrab) {
}

void UTentacleBusyComponent::GrabbedActor(AActor* victim) {
}

bool UTentacleBusyComponent::GetIsBusy() const {
    return false;
}


