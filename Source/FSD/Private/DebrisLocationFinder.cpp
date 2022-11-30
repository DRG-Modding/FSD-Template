#include "DebrisLocationFinder.h"

ADebrisLocationFinder::ADebrisLocationFinder() {
    this->Positioning = NULL;
    this->terrainPlacement = NULL;
    this->MinRadius = 0.00f;
    this->MaxRadius = 3000.00f;
    this->MaxExtraRadius = 6000.00f;
    this->MinDistanceToImportantRadius = 500.00f;
    this->MaxIteration = 10;
    this->MaxChunksPerFrame = 3;
    this->DestroyOnFinish = true;
    this->StopAtEnoughMatches = true;
}

