#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotifyState_TimedParticleEffectWithImpactDecals.generated.h"

class UPhysicalMaterial;
class UMaterialInterface;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_TimedParticleEffectWithImpactDecals : public UAnimNotifyState_TimedParticleEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(EditAnywhere)
    float DecalSize;
    
    UPROPERTY(EditAnywhere)
    float FadeStartDelay;
    
    UPROPERTY(EditAnywhere)
    float FadeDuration;
    
public:
    UAnimNotifyState_TimedParticleEffectWithImpactDecals();
protected:
    UFUNCTION()
    void OnParticleCollision(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat) const;
    
};

