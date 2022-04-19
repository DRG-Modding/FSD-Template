#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GuntowerLineProjectile.generated.h"

class UParticleSystemComponent;
class USceneComponent;
class UDamageComponent;

UCLASS()
class AGuntowerLineProjectile : public AProjectile {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLineDestroy, FHitResult, Result);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLineDestroy OnLineDestroy;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* LeftLinePoint;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* RightLinePoint;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BeamParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlatformDissolveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlatformDissolveSqueeze;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* HitParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenLineChecks;
    
public:
    AGuntowerLineProjectile();
protected:
    UFUNCTION(BlueprintCallable)
    void TurnOffParticles();
    
public:
    UFUNCTION(BlueprintCallable)
    void Fire(const FVector& Origin, const FVector& Direction, float Distance);
    
};

