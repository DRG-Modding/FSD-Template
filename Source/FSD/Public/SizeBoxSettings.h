#pragma once
#include "CoreMinimal.h"
#include "SizeBoxSettings.generated.h"

USTRUCT(BlueprintType)
struct FSizeBoxSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WidthOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeightOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDesiredHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDesiredHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAspectRatio;
    
    FSD_API FSizeBoxSettings();
};

