#include "StateDrivenBosco.h"
#include "DroneFollowState.h"
#include "Components/PointLightComponent.h"
#include "DroneReviveState.h"
#include "Components/AudioComponent.h"
#include "DroneMiningState.h"
#include "Particles/ParticleSystemComponent.h"
#include "DroneCombatState.h"

AStateDrivenBosco::AStateDrivenBosco() {
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    this->ThrusterSound = CreateDefaultSubobject<UAudioComponent>(TEXT("ThrusterSound"));
    this->L_ThrusterParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("L_ThrusterParticles"));
    this->R_ThrusterParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("R_ThrusterParticles"));
    this->FollowState = CreateDefaultSubobject<UDroneFollowState>(TEXT("FollowState"));
    this->CombatState = CreateDefaultSubobject<UDroneCombatState>(TEXT("CombatState"));
    this->MiningState = CreateDefaultSubobject<UDroneMiningState>(TEXT("MiningState"));
    this->ReviveState = CreateDefaultSubobject<UDroneReviveState>(TEXT("ReviveState"));
}

