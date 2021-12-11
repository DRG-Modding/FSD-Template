#pragma once
#include "CoreMinimal.h"
#include "MinersManualDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMinersManualDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText Headline;
    
    UPROPERTY(BlueprintReadOnly)
    FText RichDescription;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* ImageFront;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* ImageBackground;
    
    FSD_API FMinersManualDescription();
};

