#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EnemyScaleAfflictionEffect.generated.h"

UCLASS(Abstract, Blueprintable)
class UEnemyScaleAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RevertOnEndEffect;
    
public:
    UEnemyScaleAfflictionEffect();
};

