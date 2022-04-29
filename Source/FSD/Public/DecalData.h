#pragma once
#include "CoreMinimal.h"
#include "DecalData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FDecalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(EditAnywhere)
    float DecalSize;
    
    UPROPERTY(EditAnywhere)
    float DecalDepth;
    
    UPROPERTY(EditAnywhere)
    float LifeSpan;
    
    UPROPERTY(EditAnywhere)
    float StartDelay;
    
    UPROPERTY(EditAnywhere)
    float FadeInDuration;
    
    UPROPERTY(EditAnywhere)
    float FadeDuration;
    
    FSD_API FDecalData();
};

