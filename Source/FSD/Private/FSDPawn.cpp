#include "FSDPawn.h"
#include "Net/UnrealNetwork.h"
#include "EnemyTemperatureComponent.h"
#include "StatusEffectsComponent.h"

class USkeletalMeshComponent;
class AActor;
class AFSDAIController;
class UHealthComponentBase;

void AFSDPawn::UnFreeze() {
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

AFSDPawn::AFSDPawn() {
    this->StatusEffects = CreateDefaultSubobject<UStatusEffectsComponent>(TEXT("StatusEffects"));
    this->Temperature = CreateDefaultSubobject<UEnemyTemperatureComponent>(TEXT("Temperature"));
    this->SpawnedFromDescriptor = NULL;
    this->IsFrozen = false;
    this->CanFlee = true;
    this->FleeInsteadOfBackingOff = false;
    this->IsFleeing = false;
    this->PawnStatsInstance = NULL;
}

