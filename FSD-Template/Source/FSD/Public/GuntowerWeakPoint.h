#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "GuntowerWeakPoint.generated.h"

class USceneComponent;
class UWeakpointGlowComponent;
class UEnemyHealthComponent;
class UStaticMeshComponent;
class UDamageClass;
class UParticleSystem;
class USoundCue;
class UHealthComponentBase;

UCLASS()
class AGuntowerWeakPoint : public AFSDPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyHealthComponent* Health;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWeakpointGlowComponent* HitGlow;
    
protected:
    UPROPERTY(Export)
    TWeakObjectPtr<UEnemyHealthComponent> ParentHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageClass* DamageToParent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* deathParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* deathSound;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExposedChanged(bool isExposed);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void DamageParent(float ammount);
    
public:
    AGuntowerWeakPoint();
};

