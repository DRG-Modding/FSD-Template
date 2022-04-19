#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "GuntowerWeakPoint.generated.h"

class USceneComponent;
class USoundCue;
class UParticleSystem;
class UDamageClass;
class UEnemyHealthComponent;
class UStaticMeshComponent;
class UWeakpointGlowComponent;
class UHealthComponentBase;

UCLASS()
class AGuntowerWeakPoint : public AFSDPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* Health;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UWeakpointGlowComponent* HitGlow;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UEnemyHealthComponent> ParentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageToParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* deathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* deathSound;
    
public:
    AGuntowerWeakPoint();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExposedChanged(bool isExposed);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void DamageParent(float ammount);
    
};

