#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "GuntowerWeakPoint.generated.h"

class USoundCue;
class UParticleSystem;
class USceneComponent;
class UDamageClass;
class UEnemyHealthComponent;
class UStaticMeshComponent;
class UWeakpointGlowComponent;
class UHealthComponentBase;

UCLASS(Blueprintable)
class AGuntowerWeakPoint : public AFSDPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeakpointGlowComponent* HitGlow;
    
protected:
    UPROPERTY(EditAnywhere, Export)
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

