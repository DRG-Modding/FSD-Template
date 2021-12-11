#pragma once
#include "CoreMinimal.h"
#include "SoftMinersManualDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSoftMinersManualDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Headline;
    
    UPROPERTY(EditAnywhere)
    FText RichDescription;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> ImageFront;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> ImageBackground;
    
    FSD_API FSoftMinersManualDescription();
};

