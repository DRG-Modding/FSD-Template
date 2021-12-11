#pragma once
#include "CoreMinimal.h"
#include "MissionStepDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMissionStepDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText Headline;
    
    UPROPERTY(BlueprintReadOnly)
    FText RichDescription;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* Image;
    
    FSD_API FMissionStepDescription();
};

