#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnLockedMissionParameters.generated.h"

USTRUCT(BlueprintType)
struct FUnLockedMissionParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGuid> UnLockedComplexities;
    
    UPROPERTY()
    TArray<FGuid> UnLockedDurations;
    
    FSD_API FUnLockedMissionParameters();
};

