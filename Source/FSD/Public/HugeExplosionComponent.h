#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "HugeExplosionComponent.generated.h"

class UParticleSystem;

UCLASS(BlueprintType)
class UHugeExplosionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UParticleSystem* ExplosionEffect;
    
    UPROPERTY(EditAnywhere)
    float ExplosionSpeed;
    
    UPROPERTY(EditAnywhere)
    float ExplosionSize;
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerExplosion(FVector Location);
    
    UHugeExplosionComponent();
};

