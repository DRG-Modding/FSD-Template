#include "GuntowerModule.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "GunTowerHealthComponent.h"
#include "Components/SkeletalMeshComponent.h"

void AGuntowerModule::ShootOutArmor() {
}

void AGuntowerModule::SetModuleActive() {
}


void AGuntowerModule::OnRep_IsModuleActive() {
}

void AGuntowerModule::OnRep_IsArmorOff() {
}

void AGuntowerModule::OnRep_Exploded() {
}

void AGuntowerModule::OnRep_AreWeakpointExposed() {
}


void AGuntowerModule::Introduce() {
}

void AGuntowerModule::HideWeakpoints() {
}

void AGuntowerModule::HideArmor() {
}

int32 AGuntowerModule::GetModuleID() const {
    return 0;
}

void AGuntowerModule::DoExplosion() {
}

void AGuntowerModule::DeactivateTowerModule() {
}

void AGuntowerModule::All_PlayIntroductionAnim_Implementation() {
}

void AGuntowerModule::ActivateTowerModule() {
}

void AGuntowerModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGuntowerModule, CurrentTurretRotation);
    DOREPLIFETIME(AGuntowerModule, ModuleID);
    DOREPLIFETIME(AGuntowerModule, ModuleIsActive);
    DOREPLIFETIME(AGuntowerModule, AreWeakpointsExposed);
    DOREPLIFETIME(AGuntowerModule, AreWeaponsExposed);
    DOREPLIFETIME(AGuntowerModule, IsArmorOff);
    DOREPLIFETIME(AGuntowerModule, Exploded);
}

AGuntowerModule::AGuntowerModule() {
    this->ExposeWeakpointSound = NULL;
    this->deathSound = NULL;
    this->deathParticles = NULL;
    this->IntroductionAnimation = NULL;
    this->ArmorPiece1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Armor1"));
    this->ArmorPiece2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Armor2"));
    this->ArmorPiece3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Armor3"));
    this->ModuleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ModuleMesh"));
    this->GuntowerModuleHealth = CreateDefaultSubobject<UGunTowerHealthComponent>(TEXT("ModuleHealthComponent"));
    this->OwningEvent = NULL;
    this->ChildModule = NULL;
    this->WeakpointsExposedTime = 5.00f;
    this->WeakpointsExposedTimeSolo = 12.00f;
    this->HideArmorTime = 7.50f;
    this->ArmorShootoutDelay = 1.00f;
    this->ArmorLaunchPower = 100.00f;
    this->ModuleID = 0;
    this->IsPassiveModule = true;
    this->ModuleIsActive = false;
    this->AreWeakpointsExposed = false;
    this->AreWeaponsExposed = false;
    this->ConstantRotation = true;
    this->IsArmorOff = false;
    this->Exploded = false;
}

