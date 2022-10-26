#include "WormPod.h"
#include "Components/SceneComponent.h"
#include "SimpleHealthComponent.h"

class UHealthComponentBase;

void AWormPod::OnParentDeath(UHealthComponentBase* ParentHealth) {
}

void AWormPod::OnDeath(UHealthComponentBase* aHealth) {
}

void AWormPod::Kill() {
}

void AWormPod::All_ShowDeath_Implementation(bool success) {
}

AWormPod::AWormPod() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ScalePoint = CreateDefaultSubobject<USceneComponent>(TEXT("ScalePoint"));
    this->Health = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("Health"));
    this->WormDescriptor = NULL;
    this->PopParticles = NULL;
    this->deathParticles = NULL;
    this->PopSound = NULL;
    this->deathSound = NULL;
    this->ParentDeathDelay = 1.00f;
    this->DeathDelayVariance = 0.50f;
    this->WormCount = 1;
}

