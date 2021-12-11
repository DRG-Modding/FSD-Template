#include "TowerEventModule.h"
#include "Net/UnrealNetwork.h"


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

