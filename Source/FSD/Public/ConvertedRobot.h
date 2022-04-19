#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "WeaponFireOwner.h"
#include "RobotStateChangedSigDelegate.h"
#include "RobotShieldSwitchSigDelegate.h"
#include "Curves/CurveFloat.h"
#include "IntroductionStartedDelegate.h"
#include "ERobotState.h"
#include "UObject/NoExportTypes.h"
#include "EInputKeys.h"
#include "UObject/NoExportTypes.h"
#include "ConvertedRobot.generated.h"

class USoundCue;
class UAudioComponent;
class USceneComponent;
class UHitscanComponent;
class UEnemyComponent;
class UPawnStatsComponent;
class USingleUsableComponent;
class AActor;
class UOutlineComponent;
class UPointLightComponent;
class USkeletalMeshComponent;
class UDamageComponent;
class USpotLightComponent;
class UStaticMeshComponent;
class USoundBase;
class UParticleSystem;
class AParasiteEnemy;
class AProjectile;
class UAnimSequenceBase;
class APlayerCharacter;
class APawn;

UCLASS()
class AConvertedRobot : public AEnemyDeepPathfinderCharacter, public IWeaponFireOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UOutlineComponent* outline;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UHitscanComponent* HitScan;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* Usable;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* TurretRoot;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TurretMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPointLightComponent* MuzzleFlash;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLight;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LightCone;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LaserBeam;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* ShieldRoot;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* InnerShield;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* OuterShield;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAudioComponent* PulsatingSoundComp;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAudioComponent* LaserWarningSound;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRobotStateChangedSig OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRobotShieldSwitchSig OnShieldChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FIntroductionStarted OnIntroductionStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool ForceSit;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* LaserSound;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* LastPowerDownSound;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* PowerUpSound;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioComponent> LaserSoundComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntroductionTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_IsIntroducting, meta=(AllowPrivateAccess=true))
    bool IsIntroducing;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IntroductionDone;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsGrowingShield;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float AimDownwardsOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float BigShieldScale;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float SmallShieldScale;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ShieldGrowthRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float LerpExp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float MinimumShieldSize;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TargetShieldSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserScaleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSearchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool DoSpecialWhenEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool DoSpecialWhenFriendly;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool PerfectTrackingWhenEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool PerfectTrackingWhenFriendly;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ReplaceBurstAttack;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* GrenadeFireSound;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UParticleSystem* GrenadeFireParticle;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_IsFiring, meta=(AllowPrivateAccess=true))
    bool IsFiring;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float TurretSpinSpeed;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Parasites;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 SpawnParasiteNumer;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 MaxParasiteSlots;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ChanceToSpawnParasite;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<AParasiteEnemy> ParasiteClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_SpinTurret, meta=(AllowPrivateAccess=true))
    bool SpinTurret;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> SpecialAttackProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> FriendlyProjectile;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool HasLockedOn;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* TargetingSound;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* GrenadeShotAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float LockOnTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundCue* ShootSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootSoundFadeout;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShootSoundInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShootSoundTail;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UParticleSystem* TracerEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MuzzleLightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float GunRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float FireRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float GrenadeFireRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float BurstCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 MinBurst;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 MaxBurst;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float TurretLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float DamageWhenFriendly;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float FriendlyFriendlyFireMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool StartedSpecialAttack;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, ReplicatedUsing=OnRep_TeamState, meta=(AllowPrivateAccess=true))
    ERobotState TeamState;
    
private:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsWalking;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_IsDoingSpecialAttack, meta=(AllowPrivateAccess=true))
    bool IsDoingSpecialAttack;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TurretRotation;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_Target, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
public:
    AConvertedRobot();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGunsInsideTerrain();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartBossFight();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ParasiteDamaged(float aDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponsFired(const FVector& aHitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnUsed(APlayerCharacter* aUser, EInputKeys Key);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSeePawn(APawn* APawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Target();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpinTurret();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsIntroducting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFiring();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDoingSpecialAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnParasiteDeath(AActor* AParasiteEnemy);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERobotState GetTeamState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlayerMediumPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetParasites() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasPoweredDown() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DestroyAttatchPoint(USceneComponent* aComponent);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CannonEffects();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStateChanged(ERobotState NewTeamState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnShieldChanged(bool isGrowing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInstroduce();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    APlayerCharacter* GetPlayerCharacter() const override PURE_VIRTUAL(GetPlayerCharacter, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FQuat GetMuzzleQuat() const override PURE_VIRTUAL(GetMuzzleQuat, return FQuat{};);
    
    UFUNCTION(BlueprintCallable)
    FVector GetMuzzleLocation() const override PURE_VIRTUAL(GetMuzzleLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsLocallyControlled() const override PURE_VIRTUAL(GetIsLocallyControlled, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFirstPerson() const override PURE_VIRTUAL(GetIsFirstPerson, return false;);
    
};

