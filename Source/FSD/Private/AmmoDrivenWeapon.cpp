#include "AmmoDrivenWeapon.h"
#include "AmmoDriveWeaponAggregator.h"
#include "Net/UnrealNetwork.h"


void AAmmoDrivenWeapon::UpdateHoldToFire() {
}

void AAmmoDrivenWeapon::Server_StopReload_Implementation(float BlendOutTime) {
}

void AAmmoDrivenWeapon::Server_ReloadWeapon_Implementation() {
}

void AAmmoDrivenWeapon::Server_PlayBurstFire_Implementation(uint8 shotCount) {
}

void AAmmoDrivenWeapon::Server_Gunsling_Implementation(uint8 Index) {
}

void AAmmoDrivenWeapon::ResupplyAmmo(int32 Amount) {
}





void AAmmoDrivenWeapon::OnWeaponFireEnded() {
}

void AAmmoDrivenWeapon::OnWeaponFired(const FVector& Location) {
}

void AAmmoDrivenWeapon::OnRicochet(const FVector& Origin, const FVector& Location, const FVector& Normal) {
}

void AAmmoDrivenWeapon::OnRep_IsFiring() {
}

bool AAmmoDrivenWeapon::IsClipFull() const {
    return false;
}

void AAmmoDrivenWeapon::InstantlyReload() {
}


void AAmmoDrivenWeapon::Client_RefillAmmo_Implementation(float percentage) {
}

void AAmmoDrivenWeapon::All_StopReload_Implementation(float BlendOutTime) {
}

void AAmmoDrivenWeapon::All_StartReload_Implementation() {
}

void AAmmoDrivenWeapon::All_PlayBurstFire_Implementation(uint8 shotCount) {
}

void AAmmoDrivenWeapon::All_Gunsling_Implementation(uint8 Index) {
}

void AAmmoDrivenWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAmmoDrivenWeapon, FP_ReloadAnimation);
    DOREPLIFETIME(AAmmoDrivenWeapon, TP_ReloadAnimation);
    DOREPLIFETIME(AAmmoDrivenWeapon, WPN_Reload);
    DOREPLIFETIME(AAmmoDrivenWeapon, ClipCount);
    DOREPLIFETIME(AAmmoDrivenWeapon, IsFiring);
}

AAmmoDrivenWeapon::AAmmoDrivenWeapon() {
    this->WeaponFire = NULL;
    this->Aggregator = CreateDefaultSubobject<UAmmoDriveWeaponAggregator>(TEXT("Aggregator"));
    this->LoopFireAnimation = false;
    this->LoopFireAnimationBlendoutTime = 0.25f;
    this->FP_FireAnimation = NULL;
    this->TP_FireAnimation = NULL;
    this->FP_ReloadAnimation = NULL;
    this->TP_ReloadAnimation = NULL;
    this->WPN_Fire = NULL;
    this->WPN_FireLastBullet = NULL;
    this->WPN_Reload = NULL;
    this->WPN_Reload_TP = NULL;
    this->MuzzleParticles = NULL;
    this->TPMuzzleParticles = NULL;
    this->UseTriggeredMuzzleParticles = false;
    this->CasingParticles = NULL;
    this->UseTriggeredCasingParticleSystem = false;
    this->MuzzleFlashLight = NULL;
    this->FireSound = NULL;
    this->RicochetSound = NULL;
    this->RicochetParticle = NULL;
    this->FireSoundDelayToTail = -1.00f;
    this->FireSoundTail = NULL;
    this->IsFireSoundTail2D = false;
    this->FireForceFeedbackEffect = NULL;
    this->FireSoundFadeDuration = 0.20f;
    this->ReloadSound = NULL;
    this->BulletsRemainingForNearEmptySound = 0;
    this->PlayEmptySoundsIn3D = false;
    this->NearEmptySound = NULL;
    this->WeaponEmptySound = NULL;
    this->ShoutShotFired = NULL;
    this->ShoutOutOfAmmo = NULL;
    this->ShoutReloading = NULL;
    this->MaxAmmo = 0;
    this->ClipSize = 0;
    this->ShotCost = 1;
    this->RateOfFire = 0.00f;
    this->BurstCount = 0;
    this->BurstCycleTime = 20.00f;
    this->ReloadDuration = 0.00f;
    this->AmmoCount = 0;
    this->ClipCount = 0;
    this->FireInputBufferTime = 0.00f;
    this->AutoReloadDuration = 0.00f;
    this->AutoReloadCompleteCue = NULL;
    this->SupplyStatusWeight = 1.00f;
    this->CycleTimeLeft = 0.00f;
    this->UseCustomReloadDelay = false;
    this->CustomReloadDelay = 0.00f;
    this->ReloadTimeLeft = 0.00f;
    this->AutomaticReload = false;
    this->CanReload = false;
    this->HoldToFirePercentOfFireRatePenalty = -1.00f;
    this->ApplyRecoilAtEndOfBurst = false;
    this->EndOfBurstRecoilMultiplier = 1.00f;
    this->HasAutomaticFire = false;
    this->IsFiring = false;
    this->WeaponState = EAmmoWeaponState::Equipping;
}

