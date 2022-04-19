#include "WarpNoiseProperties.h"

FWarpNoiseProperties::FWarpNoiseProperties() {
    this->Frequency = 0.00f;
    this->RotationType3d = EFNRotationType3D::NONE;
    this->FractalType = EFNFractalType::NONE;
    this->Octaves = 0;
    this->Lacunarity = 0.00f;
    this->Gain = 0.00f;
    this->WeightedStrength = 0.00f;
    this->DomainWarpType = EFNDomainWarpType::OPENSIMPLEX2;
    this->Amplitude = 0.00f;
}

