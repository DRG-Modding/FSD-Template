#include "TerminatorTentacle.h"
#include "Net/UnrealNetwork.h"
#include "GrabberComponent.h"

class AActor;
class UHealthComponentBase;

void ATerminatorTentacle::PlayHitReaction(float Amount) {
}


void ATerminatorTentacle::OnRep_TentacleState() {
}

void ATerminatorTentacle::OnRep_DesiredTarget() {
}



void ATerminatorTentacle::OnGrabbedActorReleased(AActor* Actor, bool fullGrabElapsed) {
}

void ATerminatorTentacle::OnDeathEvent(UHealthComponentBase* EnemyHealth) {
}

void ATerminatorTentacle::MoveToGrabTarget(AActor* Target, float grabDuration) {
}

void ATerminatorTentacle::ChangeTentacleState(ETerminatorTentacleState NewState) {
}

void ATerminatorTentacle::All_PlayFlairAnimation_Implementation() {
}

void ATerminatorTentacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATerminatorTentacle, TentacleState);
    DOREPLIFETIME(ATerminatorTentacle, DesiredTarget);
}

ATerminatorTentacle::ATerminatorTentacle() {
    this->FlairAnimation = NULL;
    this->MinFlairAnimCooldown = 1.00f;
    this->MaxFlairAnimationCooldown = 2.00f;
    this->SwaySpeed = 50.00f;
    this->Extended = false;
    this->TentacleState = ETerminatorTentacleState::Idle;
    this->HeadMesh = NULL;
    this->GrabberComponent = CreateDefaultSubobject<UGrabberComponent>(TEXT("Grabber"));
}

