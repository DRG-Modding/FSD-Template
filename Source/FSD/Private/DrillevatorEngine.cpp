#include "DrillevatorEngine.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "SingleUsableComponent.h"

ADrillevatorEngine::ADrillevatorEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->State = EDrillevatorEngineState::Off;
    this->Health = 0.00f;
    this->MaxHealth = 50.00f;
    this->DrainRate = 2.00f;
    this->HealthPercent_Green = 0.60f;
    this->HealthPercent_Yellow = 0.25f;
    this->DamageLevel = -2;
    this->LastRepairProgress = 0.00f;
    this->MaintainerUsableComponent = CreateDefaultSubobject<USingleUsableComponent>(TEXT("UsableComponent"));
    this->EngineMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EngineMeshComponent"));
    this->EngineMaterial = NULL;
    this->EngineMeshComponent->SetupAttachment(RootComponent);
}

void ADrillevatorEngine::SetState(EDrillevatorEngineState NewState) {
}

void ADrillevatorEngine::SetLastRepairProgress(float InProgress) {
}

void ADrillevatorEngine::SetHealth(float InHealth) {
}


void ADrillevatorEngine::OnRep_LastRepairProgress() {
}

void ADrillevatorEngine::OnRep_Health() {
}


void ADrillevatorEngine::EvaluateDamageLevel() {
}

void ADrillevatorEngine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADrillevatorEngine, State);
    DOREPLIFETIME(ADrillevatorEngine, Health);
    DOREPLIFETIME(ADrillevatorEngine, DamageLevel);
    DOREPLIFETIME(ADrillevatorEngine, LastRepairProgress);
}


