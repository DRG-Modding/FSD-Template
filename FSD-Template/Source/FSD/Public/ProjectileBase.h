#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileImpact.h"
#include "EOnProjectileImpactBehaviourEnum.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "ProjectileBase.generated.h"

class UTerrainMaterial;
class USphereComponent;
class USoundCue;
class UProjectileUpgradeElement;
class UItemUpgrade;
class UPrimitiveComponent;
class AProjectileBase;
class UDamageComponent;

UCLASS(Abstract)
class AProjectileBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ProjectileImpact)
    FProjectileImpact ProjectileImpact;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool IsSpawnedFromWeapon;
    
    UPROPERTY(BlueprintReadWrite)
    bool Exploded;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DoOnImpact;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DoOnImpact2;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DoOnImpact3;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DoOnSpawnVar;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsDorment)
    bool IsDorment;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    USphereComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LifeSpan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VelocityMultiplier;
    
    UPROPERTY(EditAnywhere)
    float GravityMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool AffectedByDifficultySpeedModifier;
    
    UPROPERTY(EditAnywhere)
    bool SetInitialSpeedToMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    bool AutoDisableCollisionOnImpact;
    
    UPROPERTY(EditAnywhere)
    USoundCue* WhizbySound;
    
    UPROPERTY(EditAnywhere)
    float WhizByCooldown;
    
    UPROPERTY(EditAnywhere)
    float WhizByStartDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOnProjectileImpactBehaviourEnum EOnImpactBehaviour;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTerrainMaterial* TryGetTerrainMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetState(FVector_NetQuantize Position, FVector_NetQuantize Velocity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Penetrated(const FProjectileImpact& Impact);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Impacted(const FProjectileImpact& Impact);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpgradeElementAdded(UProjectileUpgradeElement* element);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ProjectileImpact();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDorment(const bool wasDorment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPenetrated(bool PredictedPenetration, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeBouncy();
    
    UFUNCTION(BlueprintCallable)
    void InitState(const FVector& ShootDirection, const FVector& initialBonusVelocity);
    
    UFUNCTION(BlueprintCallable)
    void InitComponents();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void IgnoreCollision(UPrimitiveComponent* otherCollider);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasImpactAuthority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameTimeSinceActivation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoneIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoOnSpawn();
    
    UFUNCTION(BlueprintCallable)
    static void DisableProjectileCollision(AProjectileBase* projectileA, AProjectileBase* projectileB);
    
    UFUNCTION(BlueprintCallable)
    void DisableAndDestroy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DamageArmor(UDamageComponent* DamageComponent, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomEvent(const UItemUpgrade* Event);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DrawServersDebugPath(FVector Location);
    
public:
    UFUNCTION(BlueprintCallable)
    void Activate(AActor* owningActor, FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AProjectileBase();
};

