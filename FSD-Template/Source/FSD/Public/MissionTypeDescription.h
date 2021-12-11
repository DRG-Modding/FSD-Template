#pragma once
#include "CoreMinimal.h"
#include "SoftMissionStepDescription.h"
#include "MissionTypeDescription.generated.h"

USTRUCT(BlueprintType)
struct FMissionTypeDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText InfoHeadline;
    
    UPROPERTY(EditAnywhere)
    TArray<FSoftMissionStepDescription> Steps;
    
    FSD_API FMissionTypeDescription();
};

