#pragma once
#include "CoreMinimal.h"
#include "HealthComponent.h"
#include "FriendlyHealthComponent.generated.h"

class UParticleSystem;

UCLASS()
class UFriendlyHealthComponent : public UHealthComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxHealth;
    
    UPROPERTY(EditAnywhere)
    float friendlyFireModifier;
    
    UPROPERTY(EditAnywhere)
    float NeutralDamageModifier;
    
    UPROPERTY(EditAnywhere)
    float BigHitDamageModifier;
    
    UPROPERTY(EditAnywhere)
    float BigHitDamageReductionThreshold;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* GenericImpactParticles;
    
public:
    /*UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;*/
    
    UFriendlyHealthComponent();
};

