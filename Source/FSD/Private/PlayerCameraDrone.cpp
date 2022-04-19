#include "PlayerCameraDrone.h"
#include "GameFramework/FloatingPawnMovement.h"

class UPrimitiveComponent;
class AActor;

bool APlayerCameraDrone::ToggleSplineMeshVisibility() {
    return false;
}

void APlayerCameraDrone::SetRotationalPivotToPlayer() {
}

void APlayerCameraDrone::SetFlareLightSettings(float Intensity, float range, float Color) {
}

bool APlayerCameraDrone::SetCameraShakeAmount(float Value) {
    return false;
}

void APlayerCameraDrone::SetBounceFlareLightSettings(float Intensity, float range, float Color) {
}

void APlayerCameraDrone::SaveLightConfig() {
}

void APlayerCameraDrone::ResetFollowVariables() {
}

void APlayerCameraDrone::ResetAllLights() {
}

void APlayerCameraDrone::OnFlareHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void APlayerCameraDrone::LoadLightConfig() {
}

FVector APlayerCameraDrone::GetFlareLightSettings() {
    return FVector{};
}


FVector APlayerCameraDrone::GetBounceFlareLightSettings() {
    return FVector{};
}


void APlayerCameraDrone::ClearFocusPoint() {
}

void APlayerCameraDrone::BeginCountdown_Implementation() {
}

APlayerCameraDrone::APlayerCameraDrone() {
    this->Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
    this->MenuTab = 0;
    this->SplineMeshIsVisible = true;
    this->SplineSpeed = 1000.00f;
    this->MouseSensitivity = 1.00f;
    this->CameraRoll = 0.00f;
    this->CameraDoesShake = false;
    this->IsFollowingPlayerRotation = false;
    this->UseFreeRotation = false;
    this->UseDOF = false;
    this->VanitySpawnable = NULL;
    this->VanityWeaponSpawnable = NULL;
    this->SelectedVanityClassIndex = 0;
    this->SelectedVanityAnimation = -1;
    this->Flare = NULL;
    this->BounceFlare = NULL;
    this->Spline = NULL;
    this->SplineMesh = NULL;
}

