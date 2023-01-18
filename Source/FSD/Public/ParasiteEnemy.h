#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "ParasiteEnemy.generated.h"

class UHealthComponentBase;
class UOutlineComponent;
class UParticleSystem;
class USceneComponent;
class USkeletalMeshComponent;
class USoundBase;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AParasiteEnemy : public AEnemyPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Tentacles1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Tentacles2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOutlineComponent* outline;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* deathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* deathSound;
    
public:
    AParasiteEnemy();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelfDeath(UHealthComponentBase* aHealthComponent);
    
};

