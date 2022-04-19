#include "TentacleBusyComponent.h"

class AActor;

void UTentacleBusyComponent::ReleasedActor(AActor* Escape, bool fullGrab) {
}

void UTentacleBusyComponent::GrabbedActor(AActor* victim) {
}

bool UTentacleBusyComponent::GetIsBusy() const {
    return false;
}

UTentacleBusyComponent::UTentacleBusyComponent() {
}

