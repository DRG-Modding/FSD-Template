#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnLockedMissionParameters.generated.h"

USTRUCT(BlueprintType)
struct FUnLockedMissionParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnLockedComplexities;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnLockedDurations;
    
    FSD_API FUnLockedMissionParameters();
};

