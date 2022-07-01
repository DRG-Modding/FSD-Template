#include "FacilityTurret.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

void AFacilityTurret::SetIsAttacking(bool IsAttacking) {
}

void AFacilityTurret::OnRep_TurretEngaged() {
}




FRotator AFacilityTurret::GetLookingDirection() const {
    return FRotator{};
}

void AFacilityTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFacilityTurret, CurrentTarget);
    DOREPLIFETIME(AFacilityTurret, TurretEngaged);
}

AFacilityTurret::AFacilityTurret() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TurretMesh"));
    this->IndicatorActivationDelay = 2.00f;
    this->FinishAttackIgnoreLoS = false;
    this->InvulnerableOnInactive = true;
    this->FoldOutTime = 1.67f;
    this->EngagedAudio = NULL;
    this->Offset = 0.00f;
    this->AimAcceleration = 0.00f;
    this->CurrentTarget = NULL;
    this->TurretEngaged = false;
    this->AlwaysActive = false;
}

