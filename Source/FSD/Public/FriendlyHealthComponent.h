#pragma once
#include "CoreMinimal.h"
#include "HealthComponent.h"
#include "FriendlyHealthComponent.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFriendlyHealthComponent : public UHealthComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxHealth;
    
    UPROPERTY(EditAnywhere)
    float friendlyFireModifier;
    
    UPROPERTY(EditAnywhere)
    float NeutralDamageModifier;
    
    UPROPERTY(EditAnywhere)
    float BigHitDamageModifier;
    
    UPROPERTY(EditAnywhere)
    float BigHitDamageReductionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GenericImpactParticles;
    
public:
    UFriendlyHealthComponent();
    /*UFUNCTION(BlueprintPure)*/
    float GetMaxHealth() const;
    
};

