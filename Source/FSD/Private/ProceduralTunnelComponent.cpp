#include "ProceduralTunnelComponent.h"

UProceduralTunnelComponent::UProceduralTunnelComponent() {
    this->TunnelParameters = NULL;
    this->CreateDirt = true;
    this->DirtInfluencer = NULL;
    this->DirtInfluencerRange = 100.00f;
}

