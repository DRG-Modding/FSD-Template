#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "ParasiteEnemy.generated.h"

class UParticleSystem;
class USceneComponent;
class USoundBase;
class UOutlineComponent;
class USkeletalMeshComponent;
class UHealthComponentBase;
class UStaticMeshComponent;

UCLASS()
class AParasiteEnemy : public AEnemyPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Tentacles1;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Tentacles2;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UOutlineComponent* outline;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UParticleSystem* deathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* deathSound;
    
public:
    AParasiteEnemy();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelfDeath(UHealthComponentBase* aHealthComponent);
    
};

