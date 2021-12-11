#include "FlyingLifter.h"
#include "Net/UnrealNetwork.h"

class UPointLightComponent;
class AActor;
class UPrimitiveComponent;

void AFlyingLifter::SetLight(UPointLightComponent* ALight) {
}

bool AFlyingLifter::SelectAnotherTarget() {
    return false;
}

void AFlyingLifter::OnStateBroke(AActor* aReleasedPlayer) {
}

void AFlyingLifter::OnRep_State() {
}

void AFlyingLifter::OnRep_ShouldScream() {
}

void AFlyingLifter::OnInDanger() {
}

void AFlyingLifter::OnActorLeftGrabZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFlyingLifter::OnActorEnterGrabZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AFlyingLifter::GetJustGrabbed() const {
    return false;
}

void AFlyingLifter::DropTarget() {
}

void AFlyingLifter::ChangeState(EGrabberState aGrabberState) {
}

void AFlyingLifter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlyingLifter, ShouldScream);
    DOREPLIFETIME(AFlyingLifter, GrabberState);
}

AFlyingLifter::AFlyingLifter() {
    this->PreventGrabAfterSpawn = 3.00f;
    this->ShouldScream = false;
    this->GrabberState = EGrabberState::StandBy;
    this->WanderingSpeed = 0.00f;
    this->WanderingAcceleration = 0.00f;
    this->ChaseSpeed = 0.00f;
    this->ChaseAcceleration = 0.00f;
    this->CarrySpeed = 0.00f;
    this->CarryAcceleration = 0.00f;
    this->FleeSpeed = 0.00f;
    this->FleeAcceleration = 0.00f;
    this->CarryCooldown = 12.00f;
    this->ScreamSound = NULL;
    this->FleeSound = NULL;
    this->FleeAnimation = NULL;
    this->GrabberCollider = NULL;
    this->ParalyzeOnGrab = true;
    this->ExtraUpForce = 10.00f;
    this->ScreamDistance = 1000.00f;
    this->GrabLight = NULL;
}

