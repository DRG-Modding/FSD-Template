#pragma once
#include "CoreMinimal.h"
#include "GenerationComponent.h"
#include "UObject/NoExportTypes.h"
#include "PillarGenerationComponent.generated.h"

class UPillarSettings;

UCLASS()
class FSD_API UPillarGenerationComponent : public UGenerationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FVector> Points;
    
    UPROPERTY(EditAnywhere)
    bool Visible;
    
    UPROPERTY(EditAnywhere)
    UPillarSettings* PillarSettings;
    
    UPillarGenerationComponent();
};

