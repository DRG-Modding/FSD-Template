#include "RecallableActor.h"
#include "Net/UnrealNetwork.h"

void ARecallableActor::SetRecallTarget_Implementation(AActor* NewTarget) {
}

void ARecallableActor::Relocate_Implementation(FVector NewLocation, FRotator NewRotation) {
}


void ARecallableActor::Recall_Implementation() {
}



void ARecallableActor::OnRep_State(ERecallableActorState oldState) {
}

void ARecallableActor::OnRep_RecallTarget() {
}



void ARecallableActor::OnPathFinished(bool success) {
}




bool ARecallableActor::GetIsReturning() const {
    return false;
}

bool ARecallableActor::GetIsMovingOrMoveRequested() const {
    return false;
}

bool ARecallableActor::GetIsMoving() const {
    return false;
}

bool ARecallableActor::GetIsMoveRequested() const {
    return false;
}

void ARecallableActor::BeginMove() {
}

void ARecallableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARecallableActor, RecallTarget);
    DOREPLIFETIME(ARecallableActor, State);
}

ARecallableActor::ARecallableActor() {
    this->AcceptanceRadius = 50.00f;
    this->AutoRecallDistance = 0.00f;
    this->RelocateLandingHeight = 300.00f;
    this->RelocationMarkerType = NULL;
    this->State = ERecallableActorState::Idle;
    this->RelocateLanded = false;
    this->bInitialized = false;
}

