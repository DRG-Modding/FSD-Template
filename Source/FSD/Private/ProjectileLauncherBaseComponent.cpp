#include "ProjectileLauncherBaseComponent.h"

class AProjectileBase;

void UProjectileLauncherBaseComponent::Server_StopFire_Implementation() {
}

void UProjectileLauncherBaseComponent::Server_Fire_Implementation(FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity, AProjectileBase* DormentProjectile, bool notifyClients) {
}

void UProjectileLauncherBaseComponent::All_ShowHit_Implementation() {
}

UProjectileLauncherBaseComponent::UProjectileLauncherBaseComponent() {
    this->IgnoreCollisionWithSelf = false;
    this->UseProjectileUpgrades = true;
    this->UseSpread = false;
    this->VerticalSpread = 0.00f;
    this->HorizontalSpread = 0.00f;
    this->ArcStartAngle = 0.00f;
    this->TransferCharacterVelocityToProjectile = false;
    this->CameraToMuzzleFireCheck = false;
}

