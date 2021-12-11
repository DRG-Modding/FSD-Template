#include "NoisyPathfinderTest.h"

ANoisyPathfinderTest::ANoisyPathfinderTest() {
    this->DirectionDistance = 0.00f;
    this->DirectionPenalty = 35000.00f;
    this->ZPenaltyPower = 1.10f;
    this->ZPenaltyScale = 0.10f;
    this->DistancePenaltyScale = 10.00f;
    this->RandomPenaltyScale = 1500.00f;
    this->TunnelSettings = NULL;
    this->TunnelParameters = NULL;
    this->StepSize = 1;
    this->Realtime = false;
    this->CarvePath = false;
    this->CanDiagonal = false;
    this->FloodFillSettings = NULL;
    this->CSGWorld = NULL;
}

