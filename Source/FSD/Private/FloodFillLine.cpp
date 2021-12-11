#include "FloodFillLine.h"

UFloodFillLine::UFloodFillLine() {
    this->WallNoiseOverride = NULL;
    this->CeilingNoiseOverride = NULL;
    this->FloorNoiseOverride = NULL;
    this->UseDetailNoise = true;
}

