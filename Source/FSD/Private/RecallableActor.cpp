#include "RecallableActor.h"
#include "Net/UnrealNetwork.h"

class AActor;

void ARecallableActor::SetRecallTarget_Implementation(AActor* NewTarget) {
}
bool ARecallableActor::SetRecallTarget_Validate(AActor* NewTarget) {
    return true;
}

void ARecallableActor::Relocate_Implementation(FVector NewLocation, FRotator NewRotation) {
}
bool ARecallableActor::Relocate_Validate(FVector NewLocation, FRotator NewRotation) {
    return true;
}


void ARecallableActor::Recall_Implementation() {
}
bool ARecallableActor::Recall_Validate() {
    return true;
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

