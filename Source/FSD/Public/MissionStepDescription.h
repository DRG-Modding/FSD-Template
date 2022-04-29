#pragma once
#include "CoreMinimal.h"
#include "MissionStepDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMissionStepDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Headline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RichDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    FSD_API FMissionStepDescription();
};

