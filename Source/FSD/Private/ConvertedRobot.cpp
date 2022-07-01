#include "ConvertedRobot.h"
#include "Net/UnrealNetwork.h"
#include "EnemyComponent.h"
#include "Components/SceneComponent.h"
#include "PawnStatsComponent.h"
#include "OutlineComponent.h"
#include "HitscanComponent.h"
#include "SingleUsableComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/AudioComponent.h"
#include "DamageComponent.h"

class APlayerCharacter;
class APawn;
class AActor;

void AConvertedRobot::UpdateGunsInsideTerrain() {
}

void AConvertedRobot::StartBossFight() {
}

void AConvertedRobot::ParasiteDamaged(float aDamage) {
}

void AConvertedRobot::OnWeaponsFired(const FVector& aHitResult) {
}

void AConvertedRobot::OnUsed(APlayerCharacter* aUser, EInputKeys Key) {
}

void AConvertedRobot::OnSeePawn(APawn* APawn) {
}

void AConvertedRobot::OnRep_TeamState() {
}

void AConvertedRobot::OnRep_Target() {
}

void AConvertedRobot::OnRep_SpinTurret() {
}

void AConvertedRobot::OnRep_IsIntroducting() {
}

void AConvertedRobot::OnRep_IsFiring() {
}

void AConvertedRobot::OnRep_IsDoingSpecialAttack() {
}

void AConvertedRobot::OnParasiteDeath(AActor* AParasiteEnemy) {
}

ERobotState AConvertedRobot::GetTeamState() const {
    return ERobotState::Enemy;
}

FVector AConvertedRobot::GetPlayerMediumPoint() const {
    return FVector{};
}

TArray<AActor*> AConvertedRobot::GetParasites() const {
    return TArray<AActor*>();
}

bool AConvertedRobot::GetHasPoweredDown() const {
    return false;
}

void AConvertedRobot::DestroyAttatchPoint_Implementation(USceneComponent* aComponent) {
}

void AConvertedRobot::CannonEffects_Implementation() {
}




void AConvertedRobot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConvertedRobot, ForceSit);
    DOREPLIFETIME(AConvertedRobot, IsIntroducing);
    DOREPLIFETIME(AConvertedRobot, IntroductionDone);
    DOREPLIFETIME(AConvertedRobot, IsGrowingShield);
    DOREPLIFETIME(AConvertedRobot, TargetShieldSize);
    DOREPLIFETIME(AConvertedRobot, IsFiring);
    DOREPLIFETIME(AConvertedRobot, Parasites);
    DOREPLIFETIME(AConvertedRobot, SpinTurret);
    DOREPLIFETIME(AConvertedRobot, HasLockedOn);
    DOREPLIFETIME(AConvertedRobot, StartedSpecialAttack);
    DOREPLIFETIME(AConvertedRobot, TeamState);
    DOREPLIFETIME(AConvertedRobot, IsWalking);
    DOREPLIFETIME(AConvertedRobot, IsDoingSpecialAttack);
    DOREPLIFETIME(AConvertedRobot, CurrentTarget);
}

AConvertedRobot::AConvertedRobot() {
    this->EnemyComponent = CreateDefaultSubobject<UEnemyComponent>(TEXT("enemy"));
    this->PawnStats = CreateDefaultSubobject<UPawnStatsComponent>(TEXT("PawnStats"));
    this->outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("outline"));
    this->HitScan = CreateDefaultSubobject<UHitscanComponent>(TEXT("HitScan"));
    this->Usable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("Usable"));
    this->TurretRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TurretRoot"));
    this->TurretMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TurretMesh"));
    this->MuzzleFlash = CreateDefaultSubobject<UPointLightComponent>(TEXT("MuzzleFlash"));
    this->SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("FloodLight"));
    this->LightCone = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LightCone"));
    this->LaserBeam = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserBeam"));
    this->ShieldRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ShieldRoot"));
    this->InnerShield = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InnerShield"));
    this->OuterShield = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OuterShieldLayer"));
    this->PulsatingSoundComp = CreateDefaultSubobject<UAudioComponent>(TEXT("PulsatingSoundComponent"));
    this->LaserWarningSound = NULL;
    this->Damage = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->ForceSit = false;
    this->LaserSound = NULL;
    this->LastPowerDownSound = NULL;
    this->PowerUpSound = NULL;
    this->IntroductionTime = 1.00f;
    this->IsIntroducing = false;
    this->IntroductionDone = false;
    this->IsGrowingShield = false;
    this->AimDownwardsOffset = 40.00f;
    this->BigShieldScale = 4.50f;
    this->SmallShieldScale = 1.20f;
    this->ShieldGrowthRate = 1.00f;
    this->LerpExp = 0.20f;
    this->MinimumShieldSize = 0.20f;
    this->TargetShieldSize = 0.00f;
    this->IdleRotationSpeed = 0.00f;
    this->LaserScaleRate = 0.00f;
    this->MaxSearchAngle = 45.00f;
    this->DoSpecialWhenEnemy = true;
    this->DoSpecialWhenFriendly = true;
    this->PerfectTrackingWhenEnemy = true;
    this->PerfectTrackingWhenFriendly = true;
    this->ReplaceBurstAttack = false;
    this->GrenadeFireSound = NULL;
    this->GrenadeFireParticle = NULL;
    this->IsFiring = false;
    this->TurretSpinSpeed = 0.00f;
    this->SpawnParasiteNumer = 2;
    this->MaxParasiteSlots = 3;
    this->ChanceToSpawnParasite = 0.00f;
    this->ParasiteClass = NULL;
    this->SpinTurret = false;
    this->SpecialAttackProjectile = NULL;
    this->FriendlyProjectile = NULL;
    this->HasLockedOn = false;
    this->TargetingSound = NULL;
    this->GrenadeShotAnimation = NULL;
    this->LockOnTime = 0.50f;
    this->ShootSound = NULL;
    this->ShootSoundFadeout = 0.20f;
    this->ShootSoundInstance = NULL;
    this->ShootSoundTail = NULL;
    this->MuzzleEffect = NULL;
    this->TracerEffect = NULL;
    this->GunRange = 0.00f;
    this->FireRate = 0.00f;
    this->GrenadeFireRate = 0.00f;
    this->BurstCooldown = 0.00f;
    this->MinBurst = 0;
    this->MaxBurst = 0;
    this->TurretLerpSpeed = 3.00f;
    this->DamageWhenFriendly = 1.00f;
    this->FriendlyFriendlyFireMultiplier = 1.00f;
    this->StartedSpecialAttack = false;
    this->TeamState = ERobotState::Enemy;
    this->IsWalking = false;
    this->IsDoingSpecialAttack = false;
    this->TurretRotation = NULL;
    this->CurrentTarget = NULL;
}

