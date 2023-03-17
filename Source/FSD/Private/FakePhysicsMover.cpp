#include "FakePhysicsMover.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

void AFakePhysicsMover::Teleport(const FVector& Pos, const FVector& Vel) {
}

void AFakePhysicsMover::OnRep_PosVel(const FFakeMoveState& NewPosVel) {
}

void AFakePhysicsMover::OnRep_MoveSettings(const UFakeMoverSettings* NewMoveSettings) {
}

void AFakePhysicsMover::ApplyImpulse(const FVector& Impulse) {
}

void AFakePhysicsMover::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFakePhysicsMover, PosVel);
    DOREPLIFETIME(AFakePhysicsMover, MoveSettings);
}

AFakePhysicsMover::AFakePhysicsMover() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->MoveSettings = NULL;
    this->SyncTime = 0.00f;
}

