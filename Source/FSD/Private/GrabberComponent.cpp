#include "GrabberComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UPrimitiveComponent;

void UGrabberComponent::Timer_ReleaseTarget() {
}

void UGrabberComponent::ReleaseTarget() {
}

void UGrabberComponent::OnRep_CurrentlyGrabbed(AActor* oldCurrentlyGrabbed) {
}

void UGrabberComponent::OnPrimWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

bool UGrabberComponent::IsGrabbedTargetValid() const {
    return false;
}

bool UGrabberComponent::HasGrabbed() const {
    return false;
}

bool UGrabberComponent::GrabTarget(AActor* aGrabTarget) {
    return false;
}

AActor* UGrabberComponent::GetGrabbedActor() {
    return NULL;
}

bool UGrabberComponent::CanGrabTarget(AActor* aTarget) const {
    return false;
}

void UGrabberComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGrabberComponent, CurrentlyGrabbed);
}

UGrabberComponent::UGrabberComponent() {
    this->GrabLoopSoundInstance = NULL;
    this->BeginGrabedSound = NULL;
    this->GrabedLoopSound = NULL;
    this->EndGrabedSound = NULL;
    this->BeginGrabbedShout = NULL;
    this->EndGrabbedShout = NULL;
    this->AttentionGrabbedShout = NULL;
    this->CurrentlyGrabbed = NULL;
    this->GrabTime = 0.00f;
    this->CarryCooldown = 12.00f;
    this->RevivedGravePeriod = 5.00f;
    this->PlayerOutlineOnGrab = EOutline::OL_NONE;
    this->CameraMode = EGrabbedStateCameraMode::FirstPerson;
    this->TrackPlayerCollision = false;
    this->ManualGrabTime = false;
    this->CanPlayerShoot = false;
    this->HeightenSensesImmune = false;
    this->NeedsPathToTarget = true;
}

