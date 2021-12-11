#include "BeltDrivenWeapon.h"
#include "Net/UnrealNetwork.h"

void ABeltDrivenWeapon::Server_StopBarrel_Implementation() {
}
bool ABeltDrivenWeapon::Server_StopBarrel_Validate() {
    return true;
}

void ABeltDrivenWeapon::Server_StartBarrel_Implementation() {
}
bool ABeltDrivenWeapon::Server_StartBarrel_Validate() {
    return true;
}

void ABeltDrivenWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABeltDrivenWeapon, Simulate_SpinBarrel);
}

ABeltDrivenWeapon::ABeltDrivenWeapon() {
    this->BarrelAudio = NULL;
    this->BarrelSound = NULL;
    this->BarrelFadeIn = 0.10f;
    this->BarrelFadeOut = 0.10f;
    this->BarrelPitchCurve = NULL;
    this->BarrelSpinUpTime = 1.00f;
    this->BarrelSpinDownTime = 1.00f;
    this->CurrentSpinRate = 0.00f;
    this->Simulate_SpinBarrel = false;
}

