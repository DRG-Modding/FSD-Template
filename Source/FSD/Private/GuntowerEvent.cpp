#include "GuntowerEvent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGuntowerEvent::AGuntowerEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Root = NULL;
    this->BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TowerBase"));
    this->EndExplosionDamage = NULL;
    this->TowerExplodeDelay = 3.00f;
    this->DelayBetweenExplosions = 0.50f;
    this->ActiveHostileModules = 0;
    this->BaseMesh->SetupAttachment(RootComponent);
}

void AGuntowerEvent::SpawnModules() {
}

void AGuntowerEvent::OnRep_ModuleActive() {
}



void AGuntowerEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGuntowerEvent, ActiveHostileModules);
}


