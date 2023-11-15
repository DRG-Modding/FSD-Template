#include "ProceduralTunnelComponent.h"

UProceduralTunnelComponent::UProceduralTunnelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TunnelParameters = NULL;
    this->CreateDirt = true;
    this->DirtInfluencer = NULL;
    this->DirtInfluencerRange = 100.00f;
}


