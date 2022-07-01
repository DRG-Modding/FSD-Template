#include "TowerModuleBase.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "EnemyHealthComponent.h"
#include "Components/SkeletalMeshComponent.h"

void ATowerModuleBase::SetState(EGuntowerModuleState NewState) {
}

void ATowerModuleBase::OnRep_State(EGuntowerModuleState prevState) {
}

void ATowerModuleBase::HideArmorPlates() {
}


void ATowerModuleBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATowerModuleBase, ModuleRotation);
    DOREPLIFETIME(ATowerModuleBase, State);
}

ATowerModuleBase::ATowerModuleBase() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ModuleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->ArmorPlates.AddDefaulted(3);
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("Heath"));
    this->DestroyedMesh = NULL;
    this->deathSound = NULL;
    this->deathParticles = NULL;
    this->ArmorLaunchPower = 100.00f;
    this->HideArmorTime = 0.00f;
    this->ModuleRotationSpeed = 0.00f;
    this->ConstantRotation = false;
    this->State = EGuntowerModuleState::EDormant;
}

