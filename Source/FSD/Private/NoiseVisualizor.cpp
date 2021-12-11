#include "NoiseVisualizor.h"

ANoiseVisualizor::ANoiseVisualizor() {
    this->FloodFillSettings = NULL;
    this->FreqMultiplier = 0.00f;
    this->AmplitudeMultiplier = 0.00f;
    this->PointSize = 15.00f;
    this->PostNoiseAmplitude = 600.00f;
    this->Octaves = 0;
    this->ShowNoise = false;
    this->ShowTerrainNoise = false;
}

