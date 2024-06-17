#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "BossFightInterface.h"
#include "DamageData.h"
#include "ERiftCrystalState.h"
#include "RiftBeam.h"
#include "RiftCrystalDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "RiftCrystal.generated.h"

class AGem;
class UAudioComponent;
class UCapsuleComponent;
class UCurveFloat;
class UCurveVector;
class UDamageComponent;
class UDamageTag;
class UDebrisPositioning;
class UEnemyComponent;
class UEnemyHealthComponent;
class UHealthComponent;
class UMeshCarverComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UPathfinderCollisionComponent;
class UPhysicalMaterial;
class UPointLightComponent;
class UPrimitiveComponent;
class URiftSpawnerComponent;
class URotatingSceneComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USoundCue;
class USpawnActorWithDebrisPosComponent;
class UTerrainDetectComponent;

UCLASS(Blueprintable)
class FSD_API ARiftCrystal : public AActor, public IGameplayTagAssetInterface, public IBossFightInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FlightRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URotatingSceneComponent* Bobber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URotatingSceneComponent* Rotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CrystalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* WeakpointCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* LargeLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* KnockBackCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshCarverComponent* SpaceCarver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTerrainDetectComponent*> TerrainDetectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* EnergyParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* PillarParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* RockIdleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* CrystalIdleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* InvulnerableParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPathfinderCollisionComponent* EscortBlocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpawnActorWithDebrisPosComponent* DebrisSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URiftSpawnerComponent* RiftSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyComponent* enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* KnockBackDamge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* EndExplosionDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRiftCrystalDelegate OnStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeamTargetParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpawnedRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRiftBeam> Beams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> KnockbackTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* DeathRattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve KnockBackCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGem> DroppedActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ExtractionPodClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* ExtractionPodPositioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ExtractionPodCostCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* InvulnerableOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* WeakPointMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* InitialBreakFreeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BreakFreeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ActivatedWarningSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BeamShootSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BeamImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* EmbeddedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PushBackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PushBackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BeamEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BeamImpactEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafetyDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetFlightHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockBackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFallSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckPathsInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReinforcementCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BossHealthBarDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InitialCarvingDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotateBeamComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FlightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FallCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERiftCrystalState> State;
    
public:
    ARiftCrystal(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopWave();
    
    UFUNCTION(BlueprintCallable)
    void StopRumble();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartWave();
    
    UFUNCTION(BlueprintCallable)
    void StartRumble();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnReinforcements();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnExtractionPod(FVector locaiton);
    
    UFUNCTION(BlueprintCallable)
    void ShowHeathBar();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowCallingEffects() const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(TEnumAsByte<ERiftCrystalState> NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReplaceCrystal(FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Receive_ExitedState(ERiftCrystalState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Receive_EnteredState(ERiftCrystalState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTerrainPointRemoved(USceneComponent* Point);
    
    UFUNCTION(BlueprintCallable)
    void OnRiftSpawned(AActor* Rift);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(TEnumAsByte<ERiftCrystalState> oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnNewHealthSegment(int32 currentSegment, int32 prevSegment);
    
    UFUNCTION(BlueprintCallable)
    void OnExitedKnockbackZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredKnockbackZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& damageTags);
    
    UFUNCTION(BlueprintCallable)
    void OnDamaged(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    
    UFUNCTION(BlueprintCallable)
    void OnAllRiftsOpened();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableTerrainDetection();
    
    UFUNCTION(BlueprintCallable)
    void DisableTerrainDetection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyPillar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CarvePillar(bool showEffects);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowRiftSpawnEffects(FVector_NetQuantize riftLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_AddKnockBack(FVector_NetQuantize Direction, float force);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

