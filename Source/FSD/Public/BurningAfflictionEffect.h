#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EFrozenBitsSize.h"
#include "BurningAfflictionEffect.generated.h"

UCLASS(Abstract, Blueprintable)
class UBurningAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrozenBitsSize FireParticleSize;
    
public:
    UBurningAfflictionEffect();
};

