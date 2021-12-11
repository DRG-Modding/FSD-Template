#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EnemyScaleAfflictionEffect.generated.h"

UCLASS(Abstract)
class UEnemyScaleAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    bool RevertOnEndEffect;
    
public:
    UEnemyScaleAfflictionEffect();
};

