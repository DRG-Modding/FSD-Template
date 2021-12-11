#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "AFlyingBug.generated.h"

class UOutlineComponent;
class UEnemyComponent;
class UPawnStatsComponent;
class UPawnAlertComponent;
class UPawnSensingComponent;
class USphereComponent;
class USoundBase;
class UAudioComponent;
class UFrozenPawnImpactComponent;
class UAnimSequenceBase;
class AActor;
class UPhysicsAsset;
class UHealthComponentBase;

UCLASS()
class AAFlyingBug : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOutlineComponent* outline;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnSensingComponent* Senses;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnAlertComponent* Alert;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* ExplosionSphere;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAudioComponent* WingSoundComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFrozenPawnImpactComponent* FrozenImpact;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<UAnimSequenceBase*> HitReactions;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RagdollImpact)
    FVector_NetQuantize RagdollImpact;
    
    UPROPERTY(Replicated, Transient)
    AActor* RotateTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicsAsset* PhysicalAssetAfterDeath;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* ChatterSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FirstHitReactBlendIn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverrideHitReactBlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceForAttackMode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinChatterDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxChatterDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackModeRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UsesAttackStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SetLifeTime;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AttackStance)
    bool AttackStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool LookStraight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseDefaultRagdoll;
    
public:
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
    void Ragdoll(bool applyForce, const FVector& force);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnStartFalling();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RagdollImpact();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AttackStance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRagdoll();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFreezeImpact();
    
    UFUNCTION(BlueprintCallable)
    void OnDamaged(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnBugDeath(UHealthComponentBase* Health);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMidZpointFromCielingAndFloor(float& distanceFromCieling, float& distanceFromFloor) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInAttackStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AlertNearbyEnemies();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AAFlyingBug();
};

