#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AFlyingBug.h"
#include "JellyBreeder.generated.h"

class UPhysicalMaterial;
class UAnimSequenceBase;
class AProjectile;
class UParticleSystem;
class USoundBase;
class UEnemyDescriptor;
class AActor;

UCLASS()
class AJellyBreeder : public AAFlyingBug {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequenceBase* EggSpawnAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* EggParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* EggSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEnemyDescriptor* EnemyToSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AProjectile> EggClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBetweenBursts;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBetweenEggs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloseToSpawnEggTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* WeakPointMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* UnWeakPointMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 EggBurstSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxJellies;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MultiplierOnHighPlayerCount;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BreedMode)
    bool IsInBreedMode;
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnEnemies(AProjectile* egg, int32 AmountToSpawn);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlaySpawnEggAnim();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BreedMode();
    
    UFUNCTION(BlueprintCallable)
    void OnJellyDestroyed(AActor* AActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BreedModeFlipped(bool aIsLayingEggs);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AJellyBreeder();
};

