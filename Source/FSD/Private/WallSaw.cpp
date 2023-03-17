#include "WallSaw.h"
#include "Net/UnrealNetwork.h"

void AWallSaw::UpdateCheckForWeakpoints() {
}

void AWallSaw::SetMovementDirection(FVector Direction) {
}

void AWallSaw::PushEnemyAndCheckForWeakpoint(AActor* Actor) {
}

void AWallSaw::OnRep_PosVel(const FSawFakeMoveState& NewPosVel) {
}

void AWallSaw::OnDurationEnd() {
}

void AWallSaw::Initialize(FVector Direction) {
}

bool AWallSaw::HasJustHit(AActor* enemy) {
    return false;
}


void AWallSaw::All_Initialize_Implementation(const FTransform& Transform, const FVector& Direction) {
}

void AWallSaw::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWallSaw, PosVel);
}

AWallSaw::AWallSaw() {
    this->HitCapsule = NULL;
    this->SpeedCof = 500.00f;
    this->VelOverTime = NULL;
    this->GroundParticles = NULL;
    this->PopWeakpointRadius = 100.00f;
    this->PlayerHitRangeFromCenter = 100.00f;
}

