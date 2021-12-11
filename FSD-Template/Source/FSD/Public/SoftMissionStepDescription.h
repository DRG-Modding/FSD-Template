#pragma once
#include "CoreMinimal.h"
#include "SoftMissionStepDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSoftMissionStepDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Headline;
    
    UPROPERTY(EditAnywhere)
    FText RichDescription;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    FSD_API FSoftMissionStepDescription();
};

