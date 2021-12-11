#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Projectile.h"
#include "ScaledEffect.h"
#include "EImpactDecalSize.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELineRotation.h"
#include "LineCutterProjectile.generated.h"

class USceneComponent;
class UDamageComponent;
class UParticleSystemComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLineCutterProjectileOnPerformHit, const FHitResult&, Result);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLineCutterProjectileOnLineDestroy, const FHitResult&, Result);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLineCutterProjectileOnLineLifespanEnd);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLineCutterProjectileOnLineEffectHide);

UCLASS()
class ALineCutterProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FScaledEffect EletricHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FScaledEffect ProjectileDisappearEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SwipeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DoubleLineDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverlapRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DestroyOnTerrainCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDead;
    
    UPROPERTY(EditAnywhere)
    bool bHasReversedDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlyStraighTime;
    
    UPROPERTY(EditAnywhere)
    EImpactDecalSize EletricDecalSize;
    
    UPROPERTY(EditAnywhere)
    EImpactDecalSize ImpactDecalSize;
    
    UPROPERTY(BlueprintAssignable)
    FLineCutterProjectileOnLineDestroy OnLineDestroy;
    
    UPROPERTY(BlueprintAssignable)
    FLineCutterProjectileOnLineLifespanEnd OnLineLifespanEnd;
    
    UPROPERTY(BlueprintAssignable)
    FLineCutterProjectileOnPerformHit OnPerformHit;
    
    UPROPERTY(BlueprintAssignable)
    FLineCutterProjectileOnLineEffectHide OnLineEffectHide;
    
    UPROPERTY(BlueprintReadWrite)
    FVector LeftLastPosition;
    
    UPROPERTY(BlueprintReadWrite)
    FVector RightLastPosition;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* LineRoot;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USceneComponent* LeftSphere;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USceneComponent* RightSphere;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USceneComponent* LeftSphere2;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USceneComponent* RightSphere2;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USceneComponent* LeftSphere3;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USceneComponent* RightSphere3;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UParticleSystemComponent* BeamParticle;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UParticleSystemComponent* BeamParticle2;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UParticleSystemComponent* BeamParticle3;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* LeftHitParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* RightHitParticles;
    
    UPROPERTY(EditAnywhere)
    float RotationSpeed;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_LineRotation)
    FRotator LineRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    ELineRotation RotationMode;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShouldExplode;
    
    UPROPERTY(BlueprintReadWrite)
    bool OnlyOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDoubleLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasPlasmaTrail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LineMaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LineExpansionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeToLineExpansion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FireRate;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UDamageComponent* InitialDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InitialHitDamageMultiplier;
    
    UPROPERTY(Transient)
    float InhibitImpactDecalsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinTimeBetweenImpactDecals;
    
    UFUNCTION(BlueprintCallable)
    void UpdateBeamLocations();
    
public:
    UFUNCTION(BlueprintCallable)
    void TerrainSweep(const FVector& Left, const FVector& Right);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSpawningTrail();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnDecal(FHitResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetExtraBeamVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RemoveDebris(int32 instance, int32 Component);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LineRotation();
    
public:
    UFUNCTION(BlueprintCallable)
    void Fire(const FVector& Origin, const FVector& Direction, float Distance);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ALineCutterProjectile();
};

