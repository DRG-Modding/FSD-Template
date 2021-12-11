#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "FrozenPawnImpactComponent.generated.h"

class UPhysicsAsset;
class UPhysicalMaterial;
class UPrimitiveComponent;
class USoundCue;
class UParticleSystem;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFrozenPawnImpactComponentOnStartFallingEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFrozenPawnImpactComponentOnFreezeImpactEvent);

UCLASS(BlueprintType)
class UFrozenPawnImpactComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFrozenPawnImpactComponentOnStartFallingEvent OnStartFallingEvent;
    
    UPROPERTY(BlueprintAssignable)
    FFrozenPawnImpactComponentOnFreezeImpactEvent OnFreezeImpactEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* FrozenMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicsAsset* FrozenAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* FrozenDeathSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* FrozenDeathparticles;
    
    UFUNCTION(BlueprintCallable)
    void TriggerFrozenRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void OnFrozen(bool frozen);
    
    UFUNCTION(BlueprintCallable)
    void OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFrozenPawnImpactComponent();
};

