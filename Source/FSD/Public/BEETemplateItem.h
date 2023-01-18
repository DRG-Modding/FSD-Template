#pragma once
#include "CoreMinimal.h"
#include "BEETemplateItem.generated.h"

class UMissionComplexity;
class UMissionDuration;
class UMissionTemplate;

USTRUCT(BlueprintType)
struct FBEETemplateItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionDuration*> AllowedDurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionComplexity*> AllowedComplexities;
    
    FSD_API FBEETemplateItem();
};

