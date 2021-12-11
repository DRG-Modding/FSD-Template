#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "ParasiteEnemy.generated.h"

class USkeletalMeshComponent;
class UOutlineComponent;
class USceneComponent;
class UHealthComponentBase;
class UStaticMeshComponent;
class UParticleSystem;
class USoundBase;

UCLASS()
class AParasiteEnemy : public AEnemyPawn {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* Tentacles1;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* Tentacles2;
    
    UPROPERTY(Export, VisibleAnywhere)
    UOutlineComponent* outline;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* deathParticles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* deathSound;
    
    UFUNCTION(BlueprintCallable)
    void OnSelfDeath(UHealthComponentBase* aHealthComponent);
    
public:
    AParasiteEnemy();
};

