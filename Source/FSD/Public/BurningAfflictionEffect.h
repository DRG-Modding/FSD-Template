#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EFrozenBitsSize.h"
#include "BurningAfflictionEffect.generated.h"

UCLASS(Abstract)
class UBurningAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EFrozenBitsSize FireParticleSize;
    
public:
    UBurningAfflictionEffect();
};

