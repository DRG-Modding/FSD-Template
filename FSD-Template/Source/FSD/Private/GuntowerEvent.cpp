#include "GuntowerEvent.h"
#include "Net/UnrealNetwork.h"

void AGuntowerEvent::OnRep_ModuleActive() {
}



void AGuntowerEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGuntowerEvent, ActiveHostileModules);
}

AGuntowerEvent::AGuntowerEvent() {
    this->Root = NULL;
    this->EndExplosionDamage = NULL;
    this->TowerExplodeDelay = 3.00f;
    this->DelayBetweenExplosions = 0.50f;
    this->ActiveHostileModules = 0;
}

