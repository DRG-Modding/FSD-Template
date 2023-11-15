#include "FSDPhysicsActor.h"

AFSDPhysicsActor::AFSDPhysicsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementUpdateFrequency = 10;
    this->MovementUpdateEventTriggeredFrequency = 30;
}

void AFSDPhysicsActor::ForceMovementUpdate() {
}


