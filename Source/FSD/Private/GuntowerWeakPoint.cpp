#include "GuntowerWeakPoint.h"
#include "WeakpointGlowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "EnemyHealthComponent.h"

class UHealthComponentBase;


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

