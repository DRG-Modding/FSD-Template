#pragma once
#include "CoreMinimal.h"
#include "GenerationComponent.h"
#include "UObject/NoExportTypes.h"
#include "BoxGenerationComponent.generated.h"

class UFloodFillSettings;

UCLASS()
class FSD_API UBoxGenerationComponent : public UGenerationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Extends;
    
    UPROPERTY(EditAnywhere)
    bool IsCarver;
    
    UPROPERTY(EditAnywhere)
    float NoiseRange;
    
    UPROPERTY(EditAnywhere)
    bool Visible;
    
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* Noise;
    
    UBoxGenerationComponent();
};

