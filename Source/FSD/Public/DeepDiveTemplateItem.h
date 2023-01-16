#pragma once
#include "CoreMinimal.h"
#include "DeepDiveTemplateItem.generated.h"

class UMissionDuration;
class UMissionComplexity;
class UMissionTemplate;

USTRUCT(BlueprintType)
struct FDeepDiveTemplateItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionDuration*> AllowedDurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionComplexity*> AllowedComplexities;
    
    FSD_API FDeepDiveTemplateItem();
};

