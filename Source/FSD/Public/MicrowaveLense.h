#pragma once
#include "CoreMinimal.h"
#include "MicrowaveLense.generated.h"

USTRUCT(BlueprintType)
struct FMicrowaveLense {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ShotRadiusMultiplier;
    
    UPROPERTY(EditAnywhere)
    float ShotBonusDamageModifier;
    
    UPROPERTY(EditAnywhere)
    float HeatModifier;
    
    UPROPERTY(EditAnywhere)
    float RateOfFireModifier;
    
    FSD_API FMicrowaveLense();
};

