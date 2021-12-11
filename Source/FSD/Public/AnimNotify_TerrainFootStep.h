#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_TerrainFootStep.generated.h"

class UParticleSystem;

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_TerrainFootStep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* ParticleTemplate;
    
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UAnimNotify_TerrainFootStep();
};

