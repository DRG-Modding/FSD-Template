#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "DamageData.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "AFlyingBug.generated.h"

class AActor;
class UAudioComponent;
class UDamageTag;
class UEnemyComponent;
class UFrozenPawnImpactComponent;
class UHealthComponent;
class UHealthComponentBase;
class UHitReactionComponent;
class UOutlineComponent;
class UPawnAlertComponent;
class UPawnSensingComponent;
class UPawnStatsComponent;
class USoundBase;
class USphereComponent;

UCLASS(Blueprintable)
class AAFlyingBug : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOutlineComponent* outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnSensingComponent* Senses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnAlertComponent* Alert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ExplosionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* WingSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFrozenPawnImpactComponent* FrozenImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitReactionComponent* HitReactions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* RotateTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ChatterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceForAttackMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinChatterDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxChatterDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackModeRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsesAttackStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AttackStance, meta=(AllowPrivateAccess=true))
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

