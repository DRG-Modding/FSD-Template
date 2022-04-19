#pragma once
#include "CoreMinimal.h"
#include "SoftMissionStepDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSoftMissionStepDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Headline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RichDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    FSD_API FSoftMissionStepDescription();
};

