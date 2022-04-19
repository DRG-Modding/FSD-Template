#pragma once
#include "CoreMinimal.h"
#include "MinersManualDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMinersManualDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText Headline;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText RichDescription;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* ImageFront;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* ImageBackground;
    
    FSD_API FMinersManualDescription();
};

