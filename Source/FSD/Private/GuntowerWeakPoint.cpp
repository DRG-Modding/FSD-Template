#include "GuntowerWeakPoint.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EnemyHealthComponent.h"
#include "WeakpointGlowComponent.h"


void AGuntowerWeakPoint::OnDeath(UHealthComponentBase* HealthComponent) {
}

void AGuntowerWeakPoint::DamageParent(float ammount) {
}

AGuntowerWeakPoint::AGuntowerWeakPoint() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("Health"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->HitGlow = CreateDefaultSubobject<UWeakpointGlowComponent>(TEXT("WeakpointGlow"));
    this->DamageToParent = NULL;
    this->deathParticles = NULL;
    this->deathSound = NULL;
}

