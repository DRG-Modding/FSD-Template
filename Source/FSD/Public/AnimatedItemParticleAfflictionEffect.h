#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EItemCategory.h"
#include "AnimatedItemParticleAfflictionEffect.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class UAnimatedItemParticleAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemCategory ItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket;
    
public:
    UAnimatedItemParticleAfflictionEffect();
};

