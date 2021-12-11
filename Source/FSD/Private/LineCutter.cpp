#include "LineCutter.h"
#include "Net/UnrealNetwork.h"

class AProjectileBase;

void ALineCutter::Server_StopRotatingProjectile_Implementation() {
}
bool ALineCutter::Server_StopRotatingProjectile_Validate() {
    return true;
}

void ALineCutter::Server_ReverseLastProjectile_Implementation() {
}
bool ALineCutter::Server_ReverseLastProjectile_Validate() {
    return true;
}

void ALineCutter::Server_DestroyOldProjectile_Implementation() {
}
bool ALineCutter::Server_DestroyOldProjectile_Validate() {
    return true;
}

void ALineCutter::OnRep_LastProjectile() const {
}

void ALineCutter::OnProjectileLaunched(AProjectileBase* Projectile) {
}


void ALineCutter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALineCutter, LastProjectile);
}

ALineCutter::ALineCutter() {
    this->StopUsingReversesProjectile = false;
    this->RotateProjectileUntillStop = false;
    this->ExplodeLastProjectileOnNextFireAttempt = false;
    this->MinExplosiveGoodbyeActivationTimme = 0.50f;
}

