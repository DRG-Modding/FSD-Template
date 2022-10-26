#pragma once
#include "CoreMinimal.h"
#include "RequiredMissionItem.generated.h"

class UMissionComplexity;
class UMissionTemplate;
class UMissionDuration;

USTRUCT(BlueprintType)
struct FRequiredMissionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* MissionTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionComplexity* Complexity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionDuration* Duration;
    
    FSD_API FRequiredMissionItem();
};

