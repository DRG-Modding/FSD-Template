#include "TentacleGrabAttack.h"

UTentacleGrabAttack::UTentacleGrabAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeadMesh = NULL;
}

bool UTentacleGrabAttack::IsHeadNearTerrain() const {
    return false;
}


