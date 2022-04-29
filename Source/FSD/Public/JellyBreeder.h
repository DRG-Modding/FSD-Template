#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AFlyingBug.h"
#include "JellyBreeder.generated.h"

class AActor;
class UAnimSequenceBase;
class UPhysicalMaterial;
class UParticleSystem;
class USoundBase;
class UEnemyDescriptor;
class AProjectile;

UCLASS(Blueprintable)
class AJellyBreeder : public AAFlyingBug {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EggSpawnAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* EggParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* EggSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* EnemyToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> EggClass;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenBursts;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenEggs;
    
    UPROPERTY(EditAnywhere)
    float CloseToSpawnEggTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* WeakPointMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* UnWeakPointMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EggBurstSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxJellies;
    
    UPROPERTY(EditAnywhere)
    float MultiplierOnHighPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BreedMode, meta=(AllowPrivateAccess=true))
    bool IsInBreedMode;
    
public:
    AJellyBreeder();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SpawnEnemies(AProjectile* Egg, int32 AmountToSpawn);
    
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
    
};

