#include "SentryGun.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"

class AActor;

void ASentryGun::UseAmmo(int32 Amount) {
}


void ASentryGun::OnRep_MaxAmmoCount(int32 OldCount) {
}

void ASentryGun::OnRep_LastTarget() {
}

void ASentryGun::OnRep_AmmoCount(int32 OldCount) {
}

void ASentryGun::OnProjectileFired(const FVector& Location) {
}

void ASentryGun::OnNewTargetRequested(const FLaserPointerTarget& HitInfo) {
}

FTransform ASentryGun::GetMuzzleTransform() const {
    return FTransform{};
}

FName ASentryGun::GetMuzzleName() const {
    return NAME_None;
}

int32 ASentryGun::GetMaxAmmoCount() const {
    return 0;
}

float ASentryGun::GetDeployProgress_Implementation() const {
    return 0.0f;
}

float ASentryGun::GetAmmoLeftPct() const {
    return 0.0f;
}

int32 ASentryGun::GetAmmoLeft() const {
    return 0;
}

void ASentryGun::Force_Fire_Implementation(AActor* Target) {
}


void ASentryGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASentryGun, Enabled);
    DOREPLIFETIME(ASentryGun, AmmoCount);
    DOREPLIFETIME(ASentryGun, MaxAmmoCount);
    DOREPLIFETIME(ASentryGun, TargetYaw);
    DOREPLIFETIME(ASentryGun, TargetPitch);
    DOREPLIFETIME(ASentryGun, LastTarget);
    DOREPLIFETIME(ASentryGun, PrioritizedTarget);
}

ASentryGun::ASentryGun() {
    this->SentryGunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SentryGunMesh"));
    this->ProjectileClass = NULL;
    this->ShootingSound = NULL;
    this->MuzzleFlash = NULL;
    this->Tracer = NULL;
    this->MinTracerDistance = 100.00f;
    this->AngleRestriction = 0.00f;
    this->Enabled = true;
    this->AquisitionRange = 5000.00f;
    this->RotationSpeed = 3.00f;
    this->ShotCoolDown = 0.20f;
    this->TargetLeading = 0.00f;
    this->BurstCount = 0;
    this->BurstShotCoolDown = 1.00f;
    this->IdleScanAngle = 120.00f;
    this->IdleScanSpeed = 1.00f;
    this->FinalShotFadeOut = 0.50f;
    this->AudioOnTurn = NULL;
    this->AmmoCount = 100;
    this->MaxAmmoCount = 100;
    this->Damage = 10.00f;
    this->TargetYaw = 0.00f;
    this->TargetPitch = 0.00f;
    this->WeaponFire = NULL;
    this->ShootingAudioComponent = NULL;
}

