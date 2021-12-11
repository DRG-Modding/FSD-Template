#include "GrabberComponent.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;
class AActor;

void UGrabberComponent::SetPlayerReleased() {
}

bool UGrabberComponent::SetPlayerGrabbed() {
    return false;
}

void UGrabberComponent::ReleaseTarget() {
}

void UGrabberComponent::OnRep_CurrentlyGrabbed() {
}

void UGrabberComponent::OnPrimWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void UGrabberComponent::OnParentDestroyed(AActor* Actor) {
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

bool UGrabberComponent::CanGrabTarget(AActor* aTarget) const {
    return false;
}

void UGrabberComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGrabberComponent, CurrentlyGrabbed);
}

UGrabberComponent::UGrabberComponent() {
    this->BeginGrabedSound = NULL;
    this->GrabedLoopSound = NULL;
    this->EndGrabedSound = NULL;
    this->BeginGrabbedShout = NULL;
    this->EndGrabbedShout = NULL;
    this->AttentionGrabbedShout = NULL;
    this->CurrentlyGrabbed = NULL;
    this->UseRestriction = EUseRestriction::Free;
    this->GrabTime = 0.00f;
    this->CarryCooldown = 12.00f;
    this->PlayerOutlineOnGrab = EOutline::OL_NONE;
    this->CameraMode = EGrabbedStateCameraMode::FirstPerson;
    this->TrackPlayerCollision = false;
    this->ManualGrabTime = false;
    this->CanPlayerShoot = false;
    this->NeedsPathToTarget = true;
}

