#include "PlagueInfectionNode.h"
#include "Net/UnrealNetwork.h"
#include "SimpleHealthComponent.h"

void APlagueInfectionNode::OnWormSpawned(AActor* worm) {
}

void APlagueInfectionNode::OnWormDestroyed(AActor* DestroyedActor) {
}

void APlagueInfectionNode::OnPodDestroyed(AActor* DestroyedActor) {
}

void APlagueInfectionNode::OnDeath(UHealthComponentBase* Health) {
}

void APlagueInfectionNode::CountNodePlague() {
}

void APlagueInfectionNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlagueInfectionNode, HasCleanPodBeenSpawned);
}

APlagueInfectionNode::APlagueInfectionNode() {
    this->HealthComponent = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("HealthComponent"));
    this->PlagueTerrainMaterial = NULL;
    this->NodeInfluenceRadius = 500.00f;
    this->NumberOfDeathEffectParticles = 10;
    this->HealthPercentageToKill = 0.05f;
    this->WormPodClass = NULL;
    this->ImportantLocationRadius = 500.00f;
    this->MaxWormCount = 5;
    this->WormPodInterval = 0.30f;
    this->MinWormPodWave = 1;
    this->MaxWormPodWave = 5;
    this->WormPodPositioning = NULL;
    this->AvoidCost = NULL;
    this->WormSpawnTimeDeviation = 3.00f;
    this->PassiveWormSpawnTime = 30.00f;
    this->ActiveWormSpawnTime = 20.00f;
    this->WormSpawnRange = 1000.00f;
    this->ActivationRange = 1500.00f;
    this->HasCleanPodBeenSpawned = false;
}

