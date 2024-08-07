#include "FSDPawn.h"
#include "Engine/EngineTypes.h"
#include "EnemyTemperatureComponent.h"
#include "Net/UnrealNetwork.h"
#include "StatusEffectsComponent.h"

AFSDPawn::AFSDPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->StatusEffects = CreateDefaultSubobject<UStatusEffectsComponent>(TEXT("StatusEffects"));
    this->temperature = CreateDefaultSubobject<UEnemyTemperatureComponent>(TEXT("temperature"));
    this->SpawnedFromDescriptor = NULL;
    this->IsFrozen = false;
    this->CanFlee = true;
    this->IsInRagdoll = false;
    this->FleeInsteadOfBackingOff = false;
    this->IsFleeing = false;
    this->PawnStatsInstance = NULL;
}

void AFSDPawn::UnFreeze() {
}

void AFSDPawn::TriggerFadeRagdoll_Implementation() {
}

void AFSDPawn::StopFleeing() {
}

void AFSDPawn::StartFleeing(const FVector& fromLocation) {
}

void AFSDPawn::SetAlerted(bool isAlerted) {
}


void AFSDPawn::OnUnFrozen_Implementation() {
}




void AFSDPawn::OnRep_IsFrozen() {
}

void AFSDPawn::OnFrozen_Implementation(AActor* Source) {
}



void AFSDPawn::OnArmorShattered(const FVector& Location) {
}

void AFSDPawn::OnAlerted() {
}

void AFSDPawn::MakeRagdollMesh(USkeletalMeshComponent* Mesh) {
}


bool AFSDPawn::IsElite() const {
    return false;
}

bool AFSDPawn::GetIsAlerted() const {
    return false;
}

UHealthComponentBase* AFSDPawn::GetHealthComponent() const {
    return NULL;
}

AFSDAIController* AFSDPawn::GetFSDAIController() const {
    return NULL;
}

EPawnAttitude AFSDPawn::GetAttitude() const {
    return EPawnAttitude::Friendly;
}

void AFSDPawn::Freeze(AActor* Source) {
}

void AFSDPawn::ExplodePawn() {
}

void AFSDPawn::BackOffFromLocation(const FVector& fromLocation) {
}

void AFSDPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFSDPawn, IsFrozen);
}


