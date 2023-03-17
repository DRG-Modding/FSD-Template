#include "LineCutter.h"
#include "Net/UnrealNetwork.h"

void ALineCutter::Server_StopRotatingProjectile_Implementation() {
}

void ALineCutter::Server_ReverseLastProjectile_Implementation() {
}

void ALineCutter::Server_DestroyOldProjectile_Implementation() {
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

