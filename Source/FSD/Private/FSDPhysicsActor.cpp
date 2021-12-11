#include "FSDPhysicsActor.h"

void AFSDPhysicsActor::ForceMovementUpdate() {
}

AFSDPhysicsActor::AFSDPhysicsActor() {
    this->MovementUpdateFrequency = 10;
    this->MovementUpdateEventTriggeredFrequency = 30;
}

