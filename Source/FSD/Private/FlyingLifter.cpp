#include "FlyingLifter.h"
#include "Net/UnrealNetwork.h"
#include "Components/CapsuleComponent.h"
#include "GrabberComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/AudioComponent.h"
#include "InDangerComponent.h"

class AActor;
class UPrimitiveComponent;

bool AFlyingLifter::SelectAnotherTarget() {
    return false;
}

void AFlyingLifter::OnStateBroke(AActor* aReleasedPlayer, bool fullGrabElapsed) {
}

void AFlyingLifter::OnRep_State(EGrabberState oldState) {
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
    
    DOREPLIFETIME(AFlyingLifter, GrabberState);
}

AFlyingLifter::AFlyingLifter() {
    this->GrabLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("GrabberLight"));
    this->GrabberComp = CreateDefaultSubobject<UGrabberComponent>(TEXT("GrabberComponent"));
    this->GrabCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("GrabCapsuleComponent"));
    this->GrabbedIdleLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("GrabLoopSound"));
    this->InDanger = CreateDefaultSubobject<UInDangerComponent>(TEXT("InDangerComponent"));
    this->ScreamComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("ScreamAudio"));
    this->PreventGrabAfterSpawn = 3.00f;
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
    this->FleeSound = NULL;
    this->FleeAnimation = NULL;
    this->ParalyzeOnGrab = true;
    this->ExtraUpForce = 10.00f;
    this->ScreamDistance = 1000.00f;
}

