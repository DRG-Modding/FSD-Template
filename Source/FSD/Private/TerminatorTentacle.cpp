#include "TerminatorTentacle.h"
#include "GrabberComponent.h"
#include "Net/UnrealNetwork.h"

ATerminatorTentacle::ATerminatorTentacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlairAnimation = NULL;
    this->MinFlairAnimCooldown = 1.00f;
    this->MaxFlairAnimationCooldown = 2.00f;
    this->SwaySpeed = 50.00f;
    this->Extended = false;
    this->TentacleState = ETerminatorTentacleState::Idle;
    this->HeadMesh = NULL;
    this->GrabberComponent = CreateDefaultSubobject<UGrabberComponent>(TEXT("Grabber"));
}

void ATerminatorTentacle::PlayHitReaction(float amount) {
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


