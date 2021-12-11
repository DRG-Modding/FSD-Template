#include "RedeployableSentryGun.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;
class AActor;
class USkeletalMeshComponent;

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
    this->bOutlineAndIconVisible = false;
    this->State = ERedeployableSentryGunState::Deploying;
    this->PlasmaLineMaxRange = 1000.00f;
    this->PlasmaBeamClass = NULL;
    this->ElectrocutionActorClass = NULL;
    this->ElectrocutionActor = NULL;
    this->EMPDischargeActorClass = NULL;
    this->EMPDiscargeCooldown = 3.00f;
}

