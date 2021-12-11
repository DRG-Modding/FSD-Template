#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ExplosionBaseComponent.h"
#include "ScaledEffect.h"
#include "Engine/EngineTypes.h"
#include "ProjectileExplosion.generated.h"

class UForceFeedbackEffect;
class USoundCue;
class UForceFeedbackAttenuation;

UCLASS()
class UProjectileExplosion : public UExplosionBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FScaledEffect ExplosionEffect;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ExplosionSound;
    
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UPROPERTY(EditAnywhere)
    UForceFeedbackAttenuation* ForceFeedbackAttanuation;
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnEffectsFromHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEffects(FVector Location, FVector Normal);
    
    UProjectileExplosion();
};

