#include "Caretaker.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "EnemyHealthComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "HealthDamageTracker.h"
#include "PawnStatsComponent.h"

class UCaretakerActionComponent;

void ACaretaker::WakeUp() {
}

void ACaretaker::SetTargetRotationRate(int32 rateIndex) {
}

void ACaretaker::OpenRandomEye(bool forbidLastEye) {
}


void ACaretaker::OnRep_Server_Rotation() {
}

void ACaretaker::OnRep_OpenEye() {
}

void ACaretaker::OnRep_CurrentStage() {
}




void ACaretaker::OnDamageTaken(float Amount) {
}

bool ACaretaker::IsAwake() const {
    return false;
}

bool ACaretaker::IsAnyEyeOpen() const {
    return false;
}

void ACaretaker::InitiateNextStage() {
}

void ACaretaker::InitCaretakerActions(TArray<UCaretakerActionComponent*> carettakeractions) {
}

void ACaretaker::CloseAllEyes() {
}

void ACaretaker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACaretaker, CurrentStage);
    DOREPLIFETIME(ACaretaker, TargetRotationRate);
    DOREPLIFETIME(ACaretaker, Server_Rotation);
    DOREPLIFETIME(ACaretaker, OpenEye);
}

ACaretaker::ACaretaker() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Body = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMesh"));
    this->Eyes.AddDefaulted(4);
    this->subHealth.AddDefaulted(4);
    this->DamageTracker = CreateDefaultSubobject<UHealthDamageTracker>(TEXT("DamageTracker"));
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("Health"));
    this->PawnStats = CreateDefaultSubobject<UPawnStatsComponent>(TEXT("PawnStats"));
    this->CurrentAction = NULL;
    this->CurrentStage = -1;
    this->TargetRotationRate = 0;
    this->RotationRates.AddDefaulted(5);
    this->Server_Rotation = 0.00f;
    this->IsInStageCooldown = false;
    this->IsWeakpointAVisible = false;
    this->IsWeakpointBVisible = false;
    this->IsWeakpointCVisible = false;
    this->IsWeakpointDVisible = false;
    this->ActiveSpawnType = ECaretakerSpawnType::None;
    this->AoEStage = 0;
    this->OpenEye = -1;
}

