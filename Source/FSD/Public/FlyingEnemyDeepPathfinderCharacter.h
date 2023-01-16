#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "FlyingEnemyDeepPathfinderCharacter.generated.h"

class AActor;
class UPrimitiveComponent;
class UPhysicalMaterial;
class UParticleSystem;
class UPhysicsAsset;
class USoundCue;

UCLASS(Blueprintable)
class AFlyingEnemyDeepPathfinderCharacter : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* FrozenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* FrozenAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FrozenDeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FrozenDeathparticles;
    
public:
    AFlyingEnemyDeepPathfinderCharacter();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerFrozenRagdoll();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FreezeImpact();
    
};

