#include "GrapplingHookGun.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "CoolDownItemAggregator.h"

class AGrapplingHookGun;

void AGrapplingHookGun::StopGrapple() {
}

bool AGrapplingHookGun::StartGrapple() {
    return false;
}

void AGrapplingHookGun::Server_SetState_Implementation(const FGraplingGunState& NewState) {
}

void AGrapplingHookGun::OnRep_State(const FGraplingGunState& prevState) {
}

void AGrapplingHookGun::OnReleaseHook() {
}





float AGrapplingHookGun::GetWindUpProgress() const {
    return 0.0f;
}

float AGrapplingHookGun::GetCooldownDuration(TSubclassOf<AGrapplingHookGun> GrapplingHookGun) {
    return 0.0f;
}

void AGrapplingHookGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGrapplingHookGun, AutoFire);
    DOREPLIFETIME(AGrapplingHookGun, State);
}

AGrapplingHookGun::AGrapplingHookGun() {
    this->CoolDownAggregator = CreateDefaultSubobject<UCoolDownItemAggregator>(TEXT("CoolDownAggregator"));
    this->MaxDistance = 2000.00f;
    this->FPReloadAnim = NULL;
    this->TPReloadAnim = NULL;
    this->FPGunslingAnim = NULL;
    this->TPGunslingAnim = NULL;
    this->MaxSpeed = 1500.00f;
    this->MaxSpeedReleaseModifier = 0.50f;
    this->WindUpTime = 0.40f;
    this->AutoFire = false;
    this->GrapleStartTime = 0.00f;
}

