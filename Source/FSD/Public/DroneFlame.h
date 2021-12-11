#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "DroneFlame.generated.h"

class UStatusEffect;
class UDamageComponent;
class UParticleSystemComponent;

UCLASS()
class ADroneFlame : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* FlameParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* Damage;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FlameParameterNames;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> OnFireStatusEffect;
    
    UPROPERTY(EditAnywhere)
    float DamageTickRate;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float FlameDiameter;
    
    UPROPERTY(EditAnywhere)
    float range;
    
public:
    ADroneFlame();
};

