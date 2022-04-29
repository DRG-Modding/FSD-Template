#pragma once
#include "CoreMinimal.h"
#include "SizeBoxSettings.generated.h"

USTRUCT(BlueprintType)
struct FSizeBoxSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float WidthOverride;
    
    UPROPERTY(EditAnywhere)
    float HeightOverride;
    
    UPROPERTY(EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(EditAnywhere)
    float MinDesiredHeight;
    
    UPROPERTY(EditAnywhere)
    float MaxDesiredWidth;
    
    UPROPERTY(EditAnywhere)
    float MaxDesiredHeight;
    
    UPROPERTY(EditAnywhere)
    float MinAspectRatio;
    
    UPROPERTY(EditAnywhere)
    float MaxAspectRatio;
    
    FSD_API FSizeBoxSettings();
};

