#include "GuntowerWeakPoint.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EnemyHealthComponent.h"
#include "WeakpointGlowComponent.h"

AGuntowerWeakPoint::AGuntowerWeakPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("Health"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->HitGlow = CreateDefaultSubobject<UWeakpointGlowComponent>(TEXT("WeakpointGlow"));
    this->DamageToParent = NULL;
    this->deathParticles = NULL;
    this->deathSound = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}


void AGuntowerWeakPoint::OnDeath(UHealthComponentBase* HealthComponent) {
}

void AGuntowerWeakPoint::DamageParent(float ammount) {
}


