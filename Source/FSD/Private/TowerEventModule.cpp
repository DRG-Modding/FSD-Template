#include "TowerEventModule.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "EnemyHealthComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "WeakpointGlowComponent.h"
#include "ArmorHealthDamageComponent.h"


void ATowerEventModule::HideArmorPlates() {
}

void ATowerEventModule::DestroyArmor() {
}

void ATowerEventModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATowerEventModule, PreviousModule);
    DOREPLIFETIME(ATowerEventModule, NextModule);
}

ATowerEventModule::ATowerEventModule() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("HealthComponent"));
    this->ArmorDamage = CreateDefaultSubobject<UArmorHealthDamageComponent>(TEXT("ArmorDamageComponent"));
    this->WeakpointGlow = CreateDefaultSubobject<UWeakpointGlowComponent>(TEXT("WeakpointGlowComponent"));
    this->SmokeParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SmokeParticlesComponent"));
    this->DestroyedMesh = NULL;
    this->ExplosionSound = NULL;
    this->ExplosionEffect = NULL;
    this->PreviousModule = NULL;
    this->NextModule = NULL;
    this->ArmorMesh = NULL;
    this->ArmorPieces = 3;
    this->ArmorLifetime = 3.00f;
    this->ArmorPopForce = 300.00f;
    this->ArmorShedDelay = 0.50f;
}

