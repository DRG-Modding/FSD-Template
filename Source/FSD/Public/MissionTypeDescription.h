#pragma once
#include "CoreMinimal.h"
#include "SoftMissionStepDescription.h"
#include "MissionTypeDescription.generated.h"

USTRUCT(BlueprintType)
struct FMissionTypeDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfoHeadline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftMissionStepDescription> Steps;
    
    FSD_API FMissionTypeDescription();
};

