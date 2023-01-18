#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ProjectileBase.h"
#include "ProjectileState.h"
#include "Templates/SubclassOf.h"
#include "Projectile.generated.h"

class AActor;
class APawn;
class AProjectile;
class UFSDPhysicalMaterial;
class UFSDProjectileMovementComponent;
class UObject;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AProjectile : public AProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    FProjectileState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseArmorDamageBoneCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> IgnoreActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFSDProjectileMovementComponent* MovementComponent;
    
public:
    AProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    AProjectileBase* SpawnProjectileFromSelf(UObject* WorldContextObject, TSubclassOf<AProjectileBase> ProjectileClass, FVector Origin, FRotator velocityDirection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AProjectileBase* SpawnProjectile(UObject* WorldContextObject, TSubclassOf<AProjectileBase> ProjectileClass, APawn* projectileOwner, FVector Origin, FRotator velocityDirection);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AProjectileBase* SpawnBallisticProjectile(UObject* WorldContextObject, TSubclassOf<AProjectile> ProjectileClass, APawn* projectileOwner, FVector Origin, FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    void SetHomingTargetComponent(USceneComponent* HomingTargetComponent, float Delay);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DisableHoming();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(const FProjectileState& oldState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPenetration(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnImpact(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFSDPhysicalMaterial* FindBoneIndexFromArmor(const FHitResult& HitResult, int32& outBoneIndex) const;
    
};

