#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "FlyingEnemyDeepPathfinderCharacter.generated.h"

class AActor;
class UPhysicalMaterial;
class UPhysicsAsset;
class UPrimitiveComponent;
class USoundCue;
class UParticleSystem;

UCLASS()
class AFlyingEnemyDeepPathfinderCharacter : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
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
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FreezeImpact();
    
    AFlyingEnemyDeepPathfinderCharacter();
};

