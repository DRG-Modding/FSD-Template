#include "FastNoiseProperties.h"

FFastNoiseProperties::FFastNoiseProperties() {
    this->Frequency = 0.00f;
    this->NoiseType = EFNNoiseType::OPENSIMPLEX2;
    this->RotationType3d = EFNRotationType3D::NONE;
    this->FractalType = EFNFractalType::NONE;
    this->Octaves = 0;
    this->Lacunarity = 0.00f;
    this->Gain = 0.00f;
    this->WeightedStrength = 0.00f;
    this->PingPongStrength = 0.00f;
    this->CellularDistanceFunc = EFNCellularDistanceFunc::EUCLIDEAN;
    this->CellularReturnYype = EFNCellularReturnType::CELLVALUE;
    this->CellularJitterMod = 0.00f;
    this->DomainWarpType = EFNDomainWarpType::OPENSIMPLEX2;
    this->WarpAmplitude = 0.00f;
}

