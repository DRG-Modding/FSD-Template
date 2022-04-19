#pragma once
#include "CoreMinimal.h"
#include "DeepDiveTemplateItem.generated.h"

class UMissionTemplate;
class UMissionDuration;

USTRUCT(BlueprintType)
struct FDeepDiveTemplateItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionDuration*> AllowedDurations;
    
    FSD_API FDeepDiveTemplateItem();
};

