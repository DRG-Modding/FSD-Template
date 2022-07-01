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

class AProjectileBase;
class UProjectileUpgradeElement;
class USoundCue;
class USphereComponent;
class UTerrainMaterial;
class UPrimitiveComponent;
class UDamageComponent;
class UItemUpgrade;

UCLASS(Abstract, Blueprintable)
class AProjectileBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ProjectileImpact, meta=(AllowPrivateAccess=true))
    FProjectileImpact ProjectileImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsSpawnedFromWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Exploded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DoOnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DoOnImpact2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DoOnImpact3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DoOnSpawnVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityMultiplier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsDorment, meta=(AllowPrivateAccess=true))
    bool IsDorment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AffectedByDifficultySpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetInitialSpeedToMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoDisableCollisionOnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* WhizbySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhizByCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhizByStartDistance;
    
    UPROPERTY(EditAnywhere)
    EOnProjectileImpactBehaviourEnum EOnImpactBehaviour;
    
public:
    AProjectileBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

