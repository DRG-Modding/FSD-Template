#pragma once
#include "CoreMinimal.h"
#include "RequiredMissionItem.generated.h"

class UMissionTemplate;
class UMissionComplexity;
class UMissionDuration;

USTRUCT(BlueprintType)
struct FRequiredMissionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionTemplate* MissionTemplate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionComplexity* Complexity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionDuration* Duration;
    
    FSD_API FRequiredMissionItem();
};

