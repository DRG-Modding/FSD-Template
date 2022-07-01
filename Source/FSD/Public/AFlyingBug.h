#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "Engine/NetSerialization.h"
#include "DamageData.h"
#include "AFlyingBug.generated.h"

class UPawnAlertComponent;
class UFrozenPawnImpactComponent;
class UOutlineComponent;
class UEnemyComponent;
class UPawnStatsComponent;
class UPawnSensingComponent;
class USphereComponent;
class UDamageTag;
class UAudioComponent;
class UHitReactionComponent;
class AActor;
class USoundBase;
class UHealthComponentBase;
class UHealthComponent;

UCLASS(Blueprintable)
class AAFlyingBug : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOutlineComponent* outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPawnSensingComponent* Senses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPawnAlertComponent* Alert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* ExplosionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* WingSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFrozenPawnImpactComponent* FrozenImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(NetMulticast, Unreliable)
    void All_Ragdoll(const FVector_NetQuantize& Location, const FVector_NetQuantize& Impulse, uint8 BoneIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AlertNearbyEnemies();
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseAndRagdoll(UHealthComponent* Health, float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& damageTags);
    
};

