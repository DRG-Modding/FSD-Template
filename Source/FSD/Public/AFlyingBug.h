#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "Engine/NetSerialization.h"
#include "DamageData.h"
#include "AFlyingBug.generated.h"

class UPawnSensingComponent;
class UEnemyComponent;
class UPawnStatsComponent;
class AActor;
class UOutlineComponent;
class UPawnAlertComponent;
class UAudioComponent;
class USphereComponent;
class UFrozenPawnImpactComponent;
class UHitReactionComponent;
class USoundBase;
class UHealthComponentBase;
class UHealthComponent;
class UDamageTag;

UCLASS()
class AAFlyingBug : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UOutlineComponent* outline;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPawnSensingComponent* Senses;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAlertComponent* Alert;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* ExplosionSphere;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAudioComponent* WingSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFrozenPawnImpactComponent* FrozenImpact;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UHitReactionComponent* HitReactions;
    
protected:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* RotateTarget;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* ChatterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceForAttackMode;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float MinChatterDelay;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float MaxChatterDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackModeRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsesAttackStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetLifeTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_AttackStance, meta=(AllowPrivateAccess=true))
    bool AttackStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LookStraight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDefaultRagdoll;
    
public:
    AAFlyingBug();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFizzle();
    
    UFUNCTION(BlueprintCallable)
    void SetRotateTarget(AActor* aTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetExternallyControlled(bool isExternallyControlled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAttackStance(bool isAttackStance);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayVoice();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnStartFalling();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AttackStance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRagdoll();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFreezeImpact();
    
    UFUNCTION(BlueprintCallable)
    void OnBugDeath(UHealthComponentBase* Health);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMidZpointFromCielingAndFloor(float& distanceFromCieling, float& distanceFromFloor) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInAttackStance() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_Ragdoll(const FVector_NetQuantize& Location, const FVector_NetQuantize& Impulse, uint8 BoneIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AlertNearbyEnemies();
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseAndRagdoll(UHealthComponent* Health, float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& damageTags);
    
};

