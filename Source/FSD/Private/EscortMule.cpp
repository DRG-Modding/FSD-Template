#include "EscortMule.h"
#include "Net/UnrealNetwork.h"
#include "SimpleObjectInfoComponent.h"
#include "FriendlyHealthComponent.h"
#include "RestrictedResourceBank.h"
#include "Components/SkeletalMeshComponent.h"
#include "OutlineComponent.h"

class APlayerCharacter;
class UInstantUsable;

bool AEscortMule::TryHeal(APlayerCharacter* User, float Amount) {
    return false;
}

void AEscortMule::SetTargetTransform(FTransform InTransform) {
}

void AEscortMule::SetSpeedModifier(float inSpeedModifier) {
}

void AEscortMule::SetFullExtracterAttached(UInstantUsable* Usable) {
}

void AEscortMule::SetExtractorDetached(UInstantUsable* Usable) {
}

void AEscortMule::SetExitGaragePath(const TArray<FVector> Path) {
}

void AEscortMule::ResetExtractors() {
}


void AEscortMule::OnRep_SpeedModifier() {
}

void AEscortMule::OnRep_MovementState() {
}


void AEscortMule::OnRep_ExtractorSlots() {
}




void AEscortMule::ObjectiveStateChange(EEscortMissionState NewState) {
}

EEscortExtractorState AEscortMule::GetExtractorState(UInstantUsable* Usable) const {
    return EEscortExtractorState::ReadyToGrab;
}

void AEscortMule::ActivateMule() {
}

void AEscortMule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEscortMule, State);
    DOREPLIFETIME(AEscortMule, MovementState);
    DOREPLIFETIME(AEscortMule, SpeedModifier);
    DOREPLIFETIME(AEscortMule, CannisterVisible_Left);
    DOREPLIFETIME(AEscortMule, CannisterVisible_Right);
    DOREPLIFETIME(AEscortMule, NextStop);
    DOREPLIFETIME(AEscortMule, IsCarvingTunnel);
    DOREPLIFETIME(AEscortMule, ExtractorSlots);
}

AEscortMule::AEscortMule() {
    this->HealthComponent = CreateDefaultSubobject<UFriendlyHealthComponent>(TEXT("HealthComponent2"));
    this->ObjectInfo = CreateDefaultSubobject<USimpleObjectInfoComponent>(TEXT("ObjectInfo"));
    this->ResourceBank = CreateDefaultSubobject<URestrictedResourceBank>(TEXT("RestrictedResourceBank"));
    this->State = EEscortMissionState::Stationary;
    this->EscortObjective = NULL;
    this->SpeedModifier = 1.00f;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->OutlineComponent = CreateDefaultSubobject<UOutlineComponent>(TEXT("OutlineComponent"));
    this->HealPerTickNormal = 0.00f;
    this->HealPerTickUnderAttack = 0.00f;
    this->CannisterVisible_Left = false;
    this->CannisterVisible_Right = false;
    this->IsCarvingTunnel = false;
    this->FullCanisters = 0;
}

