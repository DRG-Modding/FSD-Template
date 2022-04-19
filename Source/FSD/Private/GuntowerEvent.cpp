#include "GuntowerEvent.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"

void AGuntowerEvent::SpawnModules() {
}

void AGuntowerEvent::OnRep_ModuleActive() {
}



void AGuntowerEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGuntowerEvent, ActiveHostileModules);
}

AGuntowerEvent::AGuntowerEvent() {
    this->Root = NULL;
    this->BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TowerBase"));
    this->EndExplosionDamage = NULL;
    this->TowerExplodeDelay = 3.00f;
    this->DelayBetweenExplosions = 0.50f;
    this->ActiveHostileModules = 0;
}

