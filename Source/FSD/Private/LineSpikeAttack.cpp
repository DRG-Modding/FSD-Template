#include "LineSpikeAttack.h"
#include "Net/UnrealNetwork.h"

void ULineSpikeAttack::OnRep_TentaclesBurried() {
}

void ULineSpikeAttack::All_PlayEffects_Implementation() {
}

void ULineSpikeAttack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULineSpikeAttack, TentaclesBurried);
}

ULineSpikeAttack::ULineSpikeAttack() {
    this->TentacleMaterial = NULL;
    this->ActiveMaterial = NULL;
    this->TentacleImpactParticles = NULL;
    this->StartWaveParticles = NULL;
    this->TentacleImpactSound = NULL;
    this->TentacleExitSound = NULL;
    this->StartWaveSound = NULL;
    this->Tentacles = NULL;
    this->SequenceLoops = 1;
    this->SpikeClass = NULL;
    this->TentaclesBurried = false;
    this->MaxStepUpheight = 300.00f;
    this->firstSpikeDelay = 0.00f;
    this->MaxDistanceToGround = 0.00f;
    this->DistanceBetweenSpikes = 0.00f;
    this->TimeBetweenSpikes = 0.00f;
    this->TentacleStretchPower = 4000.00f;
    this->TentacleSearchDistance = 500.00f;
    this->TentacleInGroundOffset = 10.00f;
    this->MinSpikeCount = 10;
    this->MaxFails = 3;
}

