#include "GunLogicComponent.h"

UGunLogicComponent::UGunLogicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponFire = NULL;
    this->Mesh = NULL;
    this->RateOfFire = 5.00f;
    this->MuzzleParticles = NULL;
    this->TracerParticles = NULL;
    this->FireSound = NULL;
    this->MinTracerDistance = 100.00f;
    this->TracerSpeed = 10000.00f;
}

void UGunLogicComponent::SetMesh(UMeshComponent* NewMesh) {
}

void UGunLogicComponent::OnWeaponFireEnded() {
}

void UGunLogicComponent::OnWeaponFired(const FVector& Location) {
}


