#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProjectileBase.h"
#include "ProjectileState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Projectile.generated.h"

class UObject;
class UFSDProjectileMovementComponent;
class APawn;
class AActor;
class AProjectile;
class USceneComponent;
class UFSDPhysicalMaterial;

UCLASS(Abstract)
class AProjectile : public AProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_State)
    FProjectileState State;
    
    UPROPERTY(EditAnywhere)
    bool UseArmorDamageBoneCheck;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AActor>> IgnoreActorClasses;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    UFSDProjectileMovementComponent* MovementComponent;
    
public:
    UFUNCTION(BlueprintCallable)
    AProjectileBase* SpawnProjectileFromSelf(UObject* WorldContextObject, TSubclassOf<AProjectileBase> projectileClass, FVector Origin, FRotator velocityDirection);
    
    UFUNCTION(BlueprintCallable)
    static AProjectileBase* SpawnProjectile(UObject* WorldContextObject, TSubclassOf<AProjectileBase> projectileClass, APawn* projectileOwner, FVector Origin, FRotator velocityDirection);
    
    UFUNCTION(BlueprintCallable)
    static AProjectileBase* SpawnBallisticProjectile(UObject* WorldContextObject, TSubclassOf<AProjectile> projectileClass, APawn* projectileOwner, FVector Origin, FVector Velocity);
    
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AProjectile();
};

