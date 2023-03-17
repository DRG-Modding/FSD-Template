#include "WormPod.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "SimpleHealthComponent.h"

void AWormPod::SpawnWorms() {
}

void AWormPod::OnRep_Grown() {
}

void AWormPod::OnParentDeath(UHealthComponentBase* ParentHealth) {
}

void AWormPod::OnDeath(UHealthComponentBase* aHealth) {
}

void AWormPod::OnAnimEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void AWormPod::Kill() {
}

void AWormPod::All_ShowDeath_Implementation(bool success) {
}

void AWormPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWormPod, Grown);
}

AWormPod::AWormPod() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ScalePoint = CreateDefaultSubobject<USceneComponent>(TEXT("ScalePoint"));
    this->PodMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PodMesh"));
    this->Health = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("Health"));
    this->Grown = false;
    this->GrowthAnimation = NULL;
    this->PopAnimation = NULL;
    this->CarcasActor = NULL;
    this->WormDescriptor = NULL;
    this->PopParticles = NULL;
    this->deathParticles = NULL;
    this->PopSound = NULL;
    this->deathSound = NULL;
    this->ParentDeathDelay = 1.00f;
    this->DeathDelayVariance = 0.50f;
    this->WormCount = 1;
}

