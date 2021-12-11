#pragma once
#include "CoreMinimal.h"
#include "DecalData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FDecalData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    float DecalSize;
    
    UPROPERTY(EditDefaultsOnly)
    float DecalDepth;
    
    UPROPERTY(EditDefaultsOnly)
    float LifeSpan;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeDuration;
    
    FSD_API FDecalData();
};

