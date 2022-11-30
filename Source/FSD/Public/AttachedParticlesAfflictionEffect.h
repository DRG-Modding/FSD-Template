#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EAfflictionSocket.h"
#include "AttachedParticlesAfflictionEffect.generated.h"

class UFXSystemAsset;

UCLASS(Blueprintable)
class UAttachedParticlesAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemAsset*> ParticleEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAfflictionSocket Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScaleToActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseVisibilityHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseBoneFilter;
    
public:
    UAttachedParticlesAfflictionEffect();
};

