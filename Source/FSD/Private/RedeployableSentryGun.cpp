#include "RedeployableSentryGun.h"
#include "Net/UnrealNetwork.h"
#include "ActorTrackingComponent.h"
#include "OutlineComponent.h"

class APlayerCharacter;
class USkeletalMeshComponent;
class AActor;

void ARedeployableSentryGun::ToggleOutlineAndIcon(bool Visible) {
}

void ARedeployableSentryGun::SetSentryGunOwner(APlayerCharacter* Character) {
}







void ARedeployableSentryGun::OnRep_State(ERedeployableSentryGunState oldState) {
}

void ARedeployableSentryGun::OnRep_SentryGunOwner() {
}

void ARedeployableSentryGun::OnElectrocutionActorDestroyed(AActor* Actor) {
}

bool ARedeployableSentryGun::GetIsDismantled() const {
    return false;
}

bool ARedeployableSentryGun::GetIsDeployed() const {
    return false;
}

float ARedeployableSentryGun::GetAnimDuration(USkeletalMeshComponent* Mesh) {
    return 0.0f;
}

void ARedeployableSentryGun::DismantleFinished() {
}

void ARedeployableSentryGun::Dismantle() {
}

void ARedeployableSentryGun::DeployFinished() {
}

void ARedeployableSentryGun::Deploy() {
}


void ARedeployableSentryGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARedeployableSentryGun, SentryGunOwner);
    DOREPLIFETIME(ARedeployableSentryGun, State);
}

ARedeployableSentryGun::ARedeployableSentryGun() {
    this->ActorTrackingIcon = CreateDefaultSubobject<UActorTrackingComponent>(TEXT("ActorTrackingIcon"));
    this->outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("outline"));
    this->bOutlineAndIconVisible = false;
    this->State = ERedeployableSentryGunState::Deploying;
    this->PlasmaLineMaxRange = 1000.00f;
    this->PlasmaBeamClass = NULL;
    this->ElectrocutionActorClass = NULL;
    this->ElectrocutionActor = NULL;
    this->EMPDischargeActorClass = NULL;
    this->EMPDiscargeCooldown = 3.00f;
}

