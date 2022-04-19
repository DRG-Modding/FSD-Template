#pragma once
#include "CoreMinimal.h"
#include "ArmorDamageEffects.generated.h"

class UFXSystemAsset;

USTRUCT(BlueprintType)
struct FArmorDamageEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemAsset*> ArmorBreakParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemAsset*> DissolveParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemAsset*> BeamParticles;
    
    FSD_API FArmorDamageEffects();
};

